cmake_minimum_required(VERSION 3.1)
project(libecwj2)

set(INCLUDE_DIRS 
${CMAKE_CURRENT_SOURCE_DIR}/include
${CMAKE_CURRENT_SOURCE_DIR}/C/NCSEcw/lcms/include
)

set(ECW_HEADERS
include/ECW.h 
include/NCSMisc.h
)

set(NCSJP2_SOURCES
C/NCSEcw/NCSJP2/NCSJP2.cpp 
C/NCSEcw/NCSJP2/NCSJP2BitsPerComponentBox.cpp 
C/NCSEcw/NCSJP2/NCSJP2Box.cpp
C/NCSEcw/NCSJP2/NCSJP2CaptureResolutionBox.cpp
C/NCSEcw/NCSJP2/NCSJP2ChannelDefinitionBox.cpp 
C/NCSEcw/NCSJP2/NCSJP2ColorSpecificationBox.cpp 
C/NCSEcw/NCSJP2/NCSJP2ComponentMappingBox.cpp
C/NCSEcw/NCSJP2/NCSJP2ContiguousCodestreamBox.cpp 
C/NCSEcw/NCSJP2/NCSJP2DataEntryURLBox.cpp 
C/NCSEcw/NCSJP2/NCSJP2DefaultDisplayResolutionBox.cpp
C/NCSEcw/NCSJP2/NCSJP2File.cpp 
C/NCSEcw/NCSJP2/NCSJP2FileTypeBox.cpp 
C/NCSEcw/NCSJP2/NCSJP2FileView.cpp
C/NCSEcw/NCSJP2/NCSJP2GMLGeoLocationBox.cpp
C/NCSEcw/NCSJP2/NCSJP2HeaderBox.cpp
C/NCSEcw/NCSJP2/NCSJP2ImageHeaderBox.cpp
C/NCSEcw/NCSJP2/NCSJP2IntellectualPropertyBox.cpp
C/NCSEcw/NCSJP2/NCSJP2PaletteBox.cpp
C/NCSEcw/NCSJP2/NCSJP2PCSBox.cpp
C/NCSEcw/NCSJP2/NCSJP2ResolutionBox.cpp
C/NCSEcw/NCSJP2/NCSJP2SignatureBox.cpp
C/NCSEcw/NCSJP2/NCSJP2SuperBox.cpp
C/NCSEcw/NCSJP2/NCSJP2UUIDBox.cpp
C/NCSEcw/NCSJP2/NCSJP2UUIDInfoBox.cpp
C/NCSEcw/NCSJP2/NCSJP2UUIDListBox.cpp
C/NCSEcw/NCSJP2/NCSJP2WorldBox.cpp
C/NCSEcw/NCSJP2/NCSJP2XMLBox.cpp
C/NCSEcw/NCSJP2/NCSJPC.cpp
C/NCSEcw/NCSJP2/NCSJPCBuffer.cpp
C/NCSEcw/NCSJP2/NCSJPCCOCMarker.cpp
C/NCSEcw/NCSJP2/NCSJPCCodeBlock.cpp
C/NCSEcw/NCSJP2/NCSJPCCodingStyleParameter.cpp
C/NCSEcw/NCSJP2/NCSJPCCODMarker.cpp
C/NCSEcw/NCSJP2/NCSJPCCOMMarker.cpp
C/NCSEcw/NCSJP2/NCSJPCComponent.cpp
C/NCSEcw/NCSJP2/NCSJPCComponentDepthType.cpp
C/NCSEcw/NCSJP2/NCSJPCCRGMarker.cpp
C/NCSEcw/NCSJP2/NCSJPCDCShiftNode.cpp 
C/NCSEcw/NCSJP2/NCSJPCDump.cpp
C/NCSEcw/NCSJP2/NCSJPCEcwpIOStream.cpp
C/NCSEcw/NCSJP2/NCSJPCEOCMarker.cpp
C/NCSEcw/NCSJP2/NCSJPCEPHMarker.cpp
C/NCSEcw/NCSJP2/NCSJPCFileIOStream.cpp
C/NCSEcw/NCSJP2/NCSJPCICCNode.cpp
C/NCSEcw/NCSJP2/NCSJPCIOStream.cpp
C/NCSEcw/NCSJP2/NCSJPCMainHeader.cpp
C/NCSEcw/NCSJP2/NCSJPCMarker.cpp
C/NCSEcw/NCSJP2/NCSJPCMCTNode.cpp
C/NCSEcw/NCSJP2/NCSJPCMemoryIOStream.cpp
C/NCSEcw/NCSJP2/NCSJPCMQCoder.cpp
C/NCSEcw/NCSJP2/NCSJPCNode.cpp
C/NCSEcw/NCSJP2/NCSJPCNodeTiler.cpp
C/NCSEcw/NCSJP2/NCSJPCPacket.cpp
C/NCSEcw/NCSJP2/NCSJPCPacketLengthType.cpp
C/NCSEcw/NCSJP2/NCSJPCPaletteNode.cpp
C/NCSEcw/NCSJP2/NCSJPCPLMMarker.cpp
C/NCSEcw/NCSJP2/NCSJPCPLTMarker.cpp
C/NCSEcw/NCSJP2/NCSJPCPOCMarker.cpp
C/NCSEcw/NCSJP2/NCSJPCPPMMarker.cpp
C/NCSEcw/NCSJP2/NCSJPCPPTMarker.cpp
C/NCSEcw/NCSJP2/NCSJPCPrecinct.cpp
C/NCSEcw/NCSJP2/NCSJPCProgression.cpp
C/NCSEcw/NCSJP2/NCSJPCProgressionOrderType.cpp
C/NCSEcw/NCSJP2/NCSJPCQCCMarker.cpp
C/NCSEcw/NCSJP2/NCSJPCQCDMarker.cpp	
C/NCSEcw/NCSJP2/NCSJPCQuantizationParameter.cpp
C/NCSEcw/NCSJP2/NCSJPCResample.cpp
C/NCSEcw/NCSJP2/NCSJPCResolution.cpp
C/NCSEcw/NCSJP2/NCSJPCRGNMarker.cpp
C/NCSEcw/NCSJP2/NCSJPCSegment.cpp
C/NCSEcw/NCSJP2/NCSJPCSIZMarker.cpp
C/NCSEcw/NCSJP2/NCSJPCSOCMarker.cpp
C/NCSEcw/NCSJP2/NCSJPCSODMarker.cpp
C/NCSEcw/NCSJP2/NCSJPCSOPMarker.cpp
C/NCSEcw/NCSJP2/NCSJPCSOTMarker.cpp
C/NCSEcw/NCSJP2/NCSJPCSubBand.cpp
C/NCSEcw/NCSJP2/NCSJPCT1Coder.cpp
C/NCSEcw/NCSJP2/NCSJPCTagTree.cpp
C/NCSEcw/NCSJP2/NCSJPCTilePartHeader.cpp
C/NCSEcw/NCSJP2/NCSJPCTLMMarker.cpp
C/NCSEcw/NCSJP2/NCSJPCYCbCrNode.cpp
)

if(CMAKE_SYSTEM MATCHES Windows)
set(NCSECW_SOURCES
C/NCSEcw/NCSEcw/NCSOutputFile.cpp    #win32
C/NCSEcw/NCSEcw/NCSRenderer.cpp      #win32
C/NCSEcw/NCSEcw/NCSWorldFile.cpp
C/NCSEcw/NCSEcw/NCSAffineTransform.cpp
C/NCSEcw/NCSEcw/NCSBlockFile.cpp
C/NCSEcw/NCSEcw/ncscbm.c
C/NCSEcw/NCSEcw/ncscbmidwt.c 
C/NCSEcw/NCSEcw/ncscbmnet.c 
C/NCSEcw/NCSEcw/ncscbmopen.c
C/NCSEcw/NCSEcw/ncscbmpurge.c 
C/NCSEcw/NCSEcw/NCSEcw.cpp
C/NCSEcw/NCSEcw/NCSFile.cpp
C/NCSEcw/NCSEcw/NCSHuffmanCoder.cpp
)
else()
set(NCSECW_SOURCES
C/NCSEcw/NCSEcw/NCSWorldFile.cpp
C/NCSEcw/NCSEcw/NCSAffineTransform.cpp
C/NCSEcw/NCSEcw/NCSBlockFile.cpp
C/NCSEcw/NCSEcw/ncscbm.c
C/NCSEcw/NCSEcw/ncscbmidwt.c 
C/NCSEcw/NCSEcw/ncscbmnet.c 
C/NCSEcw/NCSEcw/ncscbmopen.c
C/NCSEcw/NCSEcw/ncscbmpurge.c 
C/NCSEcw/NCSEcw/NCSEcw.cpp
C/NCSEcw/NCSEcw/NCSFile.cpp
C/NCSEcw/NCSEcw/NCSHuffmanCoder.cpp
)
endif()




set(SHARED_SOURCES
C/NCSEcw/shared_src/collapse_pyr.c 
C/NCSEcw/shared_src/ecw_open.c 
C/NCSEcw/shared_src/ecw_read.c 
C/NCSEcw/shared_src/fileio_compress.c
C/NCSEcw/shared_src/fileio_decompress.c 
C/NCSEcw/shared_src/build_pyr.c 
C/NCSEcw/shared_src/pack.c 
C/NCSEcw/shared_src/qmf_util.c 
C/NCSEcw/shared_src/quantize.c 
C/NCSEcw/shared_src/unpack.c
)

set(LCMS_SOURCES
C/NCSEcw/lcms/src/cmscnvrt.c
C/NCSEcw/lcms/src/cmserr.c
C/NCSEcw/lcms/src/cmsgamma.c
C/NCSEcw/lcms/src/cmsgmt.c
C/NCSEcw/lcms/src/cmsintrp.c
C/NCSEcw/lcms/src/cmsio1.c
C/NCSEcw/lcms/src/cmslut.c
C/NCSEcw/lcms/src/cmsmatsh.c
C/NCSEcw/lcms/src/cmsmtrx.c
C/NCSEcw/lcms/src/cmsnamed.c
C/NCSEcw/lcms/src/cmspack.c
C/NCSEcw/lcms/src/cmspcs.c
C/NCSEcw/lcms/src/cmssamp.c
C/NCSEcw/lcms/src/cmsvirt.c
C/NCSEcw/lcms/src/cmswtpnt.c
C/NCSEcw/lcms/src/cmsxform.c
)

set(NCSGDT2_SOURCES
C/NCSGDT2/NCSGDTEpsg.cpp
C/NCSGDT2/NCSGDTEPSGKey.cpp
C/NCSGDT2/NCSGDTLocation.cpp
)

if(CMAKE_SYSTEM MATCHES Windows)
set(CNET_SOURCES 
C/NCSnet/NCScnet2/connect.c 
C/NCSnet/NCScnet2/NCScnet.c 
C/NCSnet/NCScnet2/NCSWinHttp.c 
C/NCSnet/NCScnet2/packet.c 
C/NCSnet/NCScnet2/cnet2util.c
)
else()
set(CNET_SOURCES 
C/NCSnet/NCScnet3/NCScnet.cpp
C/NCSnet/NCScnet3/NCSGetPasswordDlg.cpp
C/NCSnet/NCScnet3/NCSGetRequest.cpp
C/NCSnet/NCScnet3/NCSPostRequest.cpp
C/NCSnet/NCScnet3/NCSProxy.cpp
C/NCSnet/NCScnet3/NCSRequest.cpp
C/NCSnet/NCScnet3/NCSSocket.cpp
)
endif()




if(CMAKE_SYSTEM MATCHES Windows)
set(NCSUTIL_SOURCES
C/NCSUtil/CNCSMetabaseEdit.cpp
C/NCSUtil/CNCSMultiSZ.cpp
C/NCSUtil/exception_catch.c 
C/NCSUtil/NCSCoordinateConverter.cpp
C/NCSUtil/NCSCoordinateSystem.cpp
C/NCSUtil/NCSCoordinateTransform.cpp
C/NCSUtil/NCSCrypto.cpp
C/NCSUtil/NCSExtent.cpp
C/NCSUtil/NCSExtents.cpp
C/NCSUtil/NCSObjectList.cpp
C/NCSUtil/NCSPoint.cpp
C/NCSUtil/NCSRasterCoordinateConverter.cpp
C/NCSUtil/NCSScreenPoint.cpp
C/NCSUtil/NCSServerState.cpp
C/NCSUtil/NCSWorldPoint.cpp
C/NCSUtil/quadtree.cpp
C/NCSUtil/timer.c
C/NCSUtil/NCSPrefsWin.cpp
C/NCSUtil/NCSPrefs.cpp
C/NCSUtil/CNCSBase64Coder.cpp
C/NCSUtil/dynamiclib.c	
C/NCSUtil/error.c 
C/NCSUtil/file.c 
C/NCSUtil/log.cpp
C/NCSUtil/malloc.c
C/NCSUtil/mutex.c 
C/NCSUtil/NCSBase64.cpp
C/NCSUtil/NCSError.cpp
C/NCSUtil/NCSEvent.cpp	
C/NCSUtil/NCSLog.cpp
C/NCSUtil/NCSMutex.cpp
C/NCSUtil/NCSObject.cpp
C/NCSUtil/NCSThread.cpp
C/NCSUtil/pool.c 
C/NCSUtil/queue.c 
C/NCSUtil/thread.c 
C/NCSUtil/util.c
C/NCSUtil/NCSString.cpp
)
else()
set(NCSUTIL_SOURCES
C/NCSUtil/NCSPrefsXML.cpp
C/NCSUtil/NCSPrefs.cpp
C/NCSUtil/CNCSBase64Coder.cpp
C/NCSUtil/dynamiclib.c	
C/NCSUtil/error.c 
C/NCSUtil/file.c 
C/NCSUtil/log.cpp
C/NCSUtil/malloc.c
C/NCSUtil/mutex.c 
C/NCSUtil/NCSBase64.cpp
C/NCSUtil/NCSError.cpp
C/NCSUtil/NCSEvent.cpp	
C/NCSUtil/NCSLog.cpp
C/NCSUtil/NCSMutex.cpp
C/NCSUtil/NCSObject.cpp
C/NCSUtil/NCSThread.cpp
C/NCSUtil/pool.c 
C/NCSUtil/queue.c 
C/NCSUtil/thread.c 
C/NCSUtil/util.c
C/NCSUtil/NCSString.cpp
)
endif()

set(ECWC_SOURCES
C/NCSEcw/shared_src/compress.cpp
)

include_directories(${INCLUDE_DIRS})

if(CMAKE_SYSTEM MATCHES Windows)
add_compile_definitions(${PROJECT_NAME} _WINDOWS WIN32 WIN64 UNICODE _UNICODE LIBECWJ2 _MBCS)
add_library(${PROJECT_NAME} SHARED ${NCSJP2_SOURCES} ${NCSECW_SOURCES} ${SHARED_SOURCES} ${LCMS_SOURCES} ${NCSGDT2_SOURCES} ${CNET_SOURCES} ${NCSUTIL_SOURCES} ${ECWC_SOURCES} ${ECW_HEADERS})
target_link_libraries(${PROJECT_NAME} PRIVATE 
imagehlp.lib
version.lib
Crypt32.lib
shlwapi.lib
ws2_32.lib
kernel32.lib
user32.lib
gdi32.lib
comdlg32.lib
advapi32.lib
shell32.lib
ole32.lib
oleaut32.lib
uuid.lib
imm32.lib
winmm.lib
wsock32.lib
winspool.lib
delayimp.lib
)


elseif(CMAKE_SYSTEM MATCHES Linux)
add_compile_definitions(${PROJECT_NAME} _GNU_SOURCE POSIX _REENTRANT UNICODE LINUX _LARGEFILE_SOURCE _LARGEFILE64_SOURCE _FILE_OFFSET_BITS=64)
add_executable(${PROJECT_NAME} ${NCSJP2_SOURCES} ${NCSECW_SOURCES} ${SHARED_SOURCES} ${LCMS_SOURCES} ${NCSGDT2_SOURCES} ${CNET_SOURCES} ${NCSUTIL_SOURCES} ${ECWC_SOURCES} ${ECW_HEADERS})



elseif(CMAKE_SYSTEM MATCHES Darwin)
add_compile_definitions(${PROJECT_NAME} UNICODE POSIX MACOSX)
add_executable(${PROJECT_NAME} ${NCSJP2_SOURCES} ${NCSECW_SOURCES} ${SHARED_SOURCES} ${LCMS_SOURCES} ${NCSGDT2_SOURCES} ${CNET_SOURCES} ${NCSUTIL_SOURCES} ${ECWC_SOURCES} ${ECW_HEADERS})

else()

endif()

