#include "systems.hpp"
#include "components.hpp"
#include "entt/entity/fwd.hpp"


// void update(entt::registry &registry) {
//     auto view = registry.view<const position, velocity>();

//     // use a callback
//     view.each([](const auto &pos, auto &vel) { /* ... */ });

//     // use an extended callback
//     view.each([](const auto entity, const auto &pos, auto &vel) { /* ... */ });

//     // use a range-for
//     for(auto [entity, pos, vel]: view.each()) {
//         // ...
//     }

//     // use forward iterators and get only the components of interest
//     for(auto entity: view) {
//         auto &vel = view.get<velocity>(entity);
//         // ...
//     }
// }



DeltaTime::DeltaTime(){
    this->lastTick = glfwGetTime();
}

float DeltaTime::getDeltaTime(){
    const float time = glfwGetTime();
    const float deltaTime = (float)time - lastTick;
    this->lastTick = (float)time;
    return deltaTime;
}



void update(const entt::registry& registry, DeltaTime& deltaTime){
    auto sourceView = registry.view<Components::source>();
    auto playerView = registry.view<Components::player_score>();
    const float delta = deltaTime.getDeltaTime();

    for(auto& playerEntity : playerView){
        auto player = playerView.get<Components::player_score>(playerEntity);
    
        for(auto& sourceEntity: sourceView){
            auto& source = sourceView.get<const Components::source>(sourceEntity);
            player.score += source.production * source.amount * delta;
        }
        std::cout << "Update:" << player.score << '\n';
    }
    
}

/*
* Helper function to end the game during development
*/
void endGame(entt::registry& registry){
    auto view = registry.view<Components::player_score>();
    for(auto entity: view){
        auto& score = view.get<Components::player_score>(entity);
        
        if(score.score >= 1e5){
            Components::Global::gameOver = true;
        }
    }
}

void updateView(entt::registry& registry){
    const auto view = registry.view<const Components::player_score>();
    for(auto& entity : view){
        const auto player = view.get<Components::player_score>(entity);
        std::cout << "UpdateView: " << player.score << '\n';
    }    
}