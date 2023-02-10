project(backend)
add_subdirectory(websocketpp)
target_link_directories(backend
        PRIVATE
            websocketpp)
add_executable(backend backend.cpp)