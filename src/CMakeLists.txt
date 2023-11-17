add_library(main_lib
            systems.cpp
            util.cpp
            sfml.cpp)

add_executable(${PROJECT_NAME} 
                main.cpp)