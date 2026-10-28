cmake_minimum_required(VERSION 3.25)

project(Loom
    VERSION 0.1.0
    DESCRIPTION "Simple HTTP server framework"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

option(LOOM_BUILD_SAMPLES "Build sample applications" ON)

if(WIN32)
    add_compile_definitions(LOOM_PLATFORM_WINDOWS=1)
elseif(CMAKE_SYSTEM_NAME STREQUAL "Linux")
    add_compile_definitions(LOOM_PLATFORM_LINUX=1)
elseif(APPLE)
    add_compile_definitions(LOOM_PLATFORM_MACOS=1)
else()
    message(FATAL_ERROR "Unsupported platform: ${CMAKE_SYSTEM_NAME}")
endif()

add_subdirectory(Framework)

if(LOOM_BUILD_SAMPLES)
    add_subdirectory(Samples)
endif()
