add_library(main_lib
            log.cpp
            systems.cpp
            util.cpp)

add_executable(${PROJECT_NAME} 
                main.cpp)

target_link_libraries(main_lib EnTT::EnTT glfw)