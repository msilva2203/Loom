add_executable(BasicServer
    Source/BasicServer.cpp
)

target_link_libraries(BasicServer
    PRIVATE
        Loom::Loom
)
