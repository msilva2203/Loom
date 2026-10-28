add_library(Loom STATIC)

add_library(Loom::Loom ALIAS Loom)

set_target_properties(Loom PROPERTIES LINKER_LANGUAGE CXX)

target_sources(Loom
    PRIVATE
        Source/Core/Application/Application.cpp
    PUBLIC
        FILE_SET HEADERS
        BASE_DIRS Source
        FILES
            Source/Core/Core.h
            Source/Core/CoreTypes.h
            Source/Core/EntryPoint.h
            Source/Core/Platform/Platform.h
            Source/Core/Application/Application.h
)

target_compile_features(Loom PUBLIC cxx_std_23)

target_include_directories(Loom
    PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/Source"
)
