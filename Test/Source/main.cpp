

#include <string>
#include <vector>
#include <iostream>

#include "NCSECWClient.h"
#include "NCSErrors.h"

using namespace std;


bool ReadImageInfo(string fileName);
bool ReadImageFromFile(string fileName);

bool ReadImageInfo(string fileName)
{
    NCSFileView* pNCSFileView = nullptr;
    NCSFileViewFileInfo* pNCSFileInfo = nullptr;
    if (NCScbmOpenFileView( (char*)fileName.c_str(), &pNCSFileView, nullptr) != NCS_SUCCESS)
        return false;

    if (NCScbmGetViewFileInfo(pNCSFileView, &pNCSFileInfo) == NCS_SUCCESS)
    {
        std::cout << "Image size : " << pNCSFileInfo->nSizeX << "x" << pNCSFileInfo->nSizeY << std::endl;
        std::cout << "Image band : " << pNCSFileInfo->nBands << std::endl;
        return true;
    }

    NCScbmCloseFileView(pNCSFileView);
    return false;
}

bool ReadImageFromFile(string fileName)
{
    NCSFileView* pNCSFileView = nullptr;
    NCSFileViewFileInfo* pNCSFileInfo = nullptr;
    if (NCScbmOpenFileView((char* )fileName.c_str(), &pNCSFileView, NULL) !=
        NCS_SUCCESS)
        return false;

    if (NCScbmGetViewFileInfo(pNCSFileView, &pNCSFileInfo) != NCS_SUCCESS)
    {
        NCScbmCloseFileView(pNCSFileView);
        return false;
    }

    //imageBaseInfo.width = pNCSFileInfo->nSizeX;
    //imageBaseInfo.height = pNCSFileInfo->nSizeY;
    //imageBaseInfo.bitDepth = 24;
    //imageBaseInfo.bandCount = pNCSFileInfo->nBands;

    std::vector<uint8_t> buffer(3 * pNCSFileInfo->nSizeX);
    std::vector<uint32_t> bandlist(pNCSFileInfo->nBands);

    for (int bandIdx = 0; bandIdx < pNCSFileInfo->nBands; bandIdx++)
    {
        bandlist[bandIdx] = bandIdx;
    }

    if (NCScbmSetFileView(pNCSFileView,
                          pNCSFileInfo->nBands,
                            bandlist.data(),
                            0,
                            0,
                          pNCSFileInfo->nSizeX - 1,
                          pNCSFileInfo->nSizeY - 1,
                          pNCSFileInfo->nSizeX,
                          pNCSFileInfo->nSizeY) != NCS_SUCCESS)
    {
        NCScbmCloseFileView(pNCSFileView);
        return false;
    }

    int lineOkCnt = 0;
    for (int lineNbr = 0; lineNbr < pNCSFileInfo->nSizeY; lineNbr++)
    {
        if (NCScbmReadViewLineBGR(pNCSFileView, buffer.data()) != NCSECW_READ_OK)
            break;
        lineOkCnt++;
    }
    NCScbmCloseFileView(pNCSFileView);
    std::cout << "Read data  : " << lineOkCnt << " ok / total " << pNCSFileInfo->nSizeY << " lines" << std::endl;
    return true;
}



int main() {
    string ecwPath = "D:/Workspaces/LibECWJ2/libecwj2-cmake/images/sample.ecw";


    NCSecwInit();

    ReadImageInfo(ecwPath);
    ReadImageFromFile(ecwPath);


    NCSecwShutdown();

    system("pause");
    return 0;
}