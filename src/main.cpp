// #include <bits/ranges_base.h>
// #include <string>
// #include <iostream>
// #include <chrono>
// #include "player.hpp"
// #include "source.hpp"
#include <thread>
#include <chrono>

#include "components.hpp"
#include "systems.hpp"
#include <entt/entt.hpp>
#include<cmath>
#include <GLFW/glfw3.h>


// class GameTimer{
//     public:
//         GameTimer(){
//             prevTime = std::chrono::high_resolution_clock::now();
//         }
//         void update(Source &source, Player &player){
//             const auto currentTime  {std::chrono::high_resolution_clock::now()};
//             const auto elapsed = std::chrono::duration_cast<std::chrono::seconds>(currentTime - prevTime);
//             const float elapsed_f = elapsed.count(); 
//             if(elapsed_f <= 1.0)
//                 return;
//             player.IncreaseScore(source.getOutput() * elapsed_f);
//             prevTime = currentTime;
//             updateScreen(player);
//         }
//         void updateScreen(Player &player){
//             std::cout << player << "\n";
//         }
//     private:
//     std::chrono::time_point<std::chrono::system_clock> prevTime;
// };

// class GameManager {
//     public:
//         GameManager(){
//             std::cout.precision(3);
//             gameOver = false;
//             player = Player();
//             manaPool = Source(1, 1e50);
//             timer = GameTimer();
//         }
//         void run (){
//             while(!gameOver){
//                 if(player.getVitality() >= 1e56)
//                     gameOver = true;
//                 timer.update(manaPool, player);
//             }
//         }
//     private:
//         bool gameOver;
//         Source manaPool;
//         Player player;
//         GameTimer timer;
// };






// int main(){
//     // GameManager manager = GameManager();
//     // manager.run();
//     entt::registry registry;
//     GlfwWrapper glfw = GlfwWrapper();
//     DeltaTime delta = DeltaTime();
//     std::cout.precision(3);


//     for(unsigned int i = 1; i < 11; i++){
//         const auto entity = registry.create();
//         registry.emplace<Components::source>(entity, i, i * pow(i, i));
//     }
//     {
//         const auto entity = registry.create();
//         registry.emplace<Components::player_score>(entity, 1.0);
//     }
    
//     while(!Components::Global::gameOver){
//         update(registry, delta);
//         endGame(registry);
//         updateView(registry);
//     }
// }


//Testing Main
int main(){
    GlfwWrapper wrapper = GlfwWrapper();
    DeltaTime delta = DeltaTime();
    std::this_thread::sleep_for(std::chrono::seconds(4));
    const double time = delta.getDeltaTime();
    std::cout << time << '\n';
}