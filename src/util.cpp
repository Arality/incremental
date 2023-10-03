#include "util.hpp"

namespace util{

    GlfwWrapper::GlfwWrapper(){
        if(!glfwInit()){
            fprintf( stderr, "Failed to initialize GLFW\n" );
            exit( EXIT_FAILURE );
        }
    }
    GlfwWrapper::~GlfwWrapper(){
        glfwTerminate();
    }

    template<typename T>
    void getEntity(const entt::registry& registry, const T entity){
        const auto view = registry.view<entity>();
        for(auto&  item: view){
            return item.get<entity>(item);
        }
    }
};
