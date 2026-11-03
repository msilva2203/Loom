add_library(Loom STATIC)

add_library(Loom::Loom ALIAS Loom)

set_target_properties(Loom PROPERTIES LINKER_LANGUAGE CXX)

target_sources(
    Loom
    PRIVATE
        Runtime/Core/Application/Application.cpp
        Runtime/Core/Platform/Linux/LinuxSocket.cpp
        Runtime/Core/Platform/Windows/WindowsNetworking.cpp
        Runtime/Core/Platform/Windows/WindowsSocket.cpp
    PUBLIC
        FILE_SET HEADERS
        BASE_DIRS Runtime
        FILES
            Runtime/Loom.h
            Runtime/Core/Core.h
            Runtime/Core/CoreTypes.h
            Runtime/Core/EntryPoint.h
            Runtime/Core/Application/Application.h
            Runtime/Core/Platform/Platform.h
            Runtime/Core/Platform/PlatformNetworking.h
            Runtime/Core/Platform/PlatformSocket.h
            Runtime/Core/Platform/PlatformTypes.h
            Runtime/Core/Platform/Socket.h
            Runtime/Core/Platform/Linux/LinuxMain.h
            Runtime/Core/Platform/Linux/LinuxNetworking.h
            Runtime/Core/Platform/Linux/LinuxPlatform.h
            Runtime/Core/Platform/Linux/LinuxSocket.h
            Runtime/Core/Platform/Windows/WindowsMain.h
            Runtime/Core/Platform/Windows/WindowsNetworking.h
            Runtime/Core/Platform/Windows/WindowsPlatform.h
            Runtime/Core/Platform/Windows/WindowsSocket.h
)

target_compile_features(Loom PUBLIC cxx_std_23)

target_include_directories(Loom
    PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/Runtime"
        "${CMAKE_CURRENT_SOURCE_DIR}/Runtime/Core"
)
