#include "systems.hpp"



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






void updateSource(entt::registry& registry, const float deltaTime){
    auto sourceView = registry.view<Components::source>();
    auto playerView = registry.view<Components::player_score>();

    for (auto [entity, player]: playerView.each()) {
    
        for(const auto& sourceEntity: sourceView){
            const auto& source = sourceView.get<Components::source>(sourceEntity);
            const double updateAmount = source.production * source.amount * deltaTime;
            player.score = player.score + updateAmount;
        }
    }
    
}

/*
* Helper function to end the game during development
*/
void endGame(const entt::registry& registry){
    auto view = registry.view<Components::player_score>();
    for(auto entity: view){
        auto& score = view.get<Components::player_score>(entity);
        
        if(score.score >= 50.0){
            Components::Global::gameOver = true;
        }
    }
}

void updateView(const entt::registry& registry){
    const auto view = registry.view<Components::player_score>();
    for(auto& entity : view){
        const auto player = view.get<Components::player_score>(entity);
        std::cout << "UpdateView: " << player.score << '\n';
    }    
}