cmake_minimum_required(VERSION 3.1)
project(TestECWJ2)

set(INCLUDE_DIRS
../../Source/include
../../Source/C/NCSEcw/lcms/include
)
include_directories(${INCLUDE_DIRS})


add_executable(${PROJECT_NAME} main.cpp)

if(CMAKE_SYSTEM MATCHES Windows)
    target_link_libraries(${PROJECT_NAME} PRIVATE
    ../../../Build/Release/libecwj2.lib
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
target_link_libraries(${PROJECT_NAME} PRIVATE
../../../Build/Release/libecwj2.a
)


elseif(CMAKE_SYSTEM MATCHES Darwin)
target_link_libraries(${PROJECT_NAME} PRIVATE
../../../Build/Release/libecwj2.a
)

endif()
