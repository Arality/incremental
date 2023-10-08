

// TEST(update, updateTest){
//     entt::registry registry;
//     const auto player = registry.create();
//     registry.emplace<Components::player_score>(player, 1.0);
//     const auto source = registry.create();
//     registry.emplace<Components::source>(source, 1, 1);
//     DeltaTime delta = DeltaTime();
//     std::this_thread::sleep_for(std::chrono::seconds(1));
//     update(registry, delta);
//     const auto entity = registry.create();
//     const auto playerReturn = registry.get<Components::player_score>(entity);
//     // ASSERT_DOUBLE_EQ(1.0, playerReturn.player_score.score);
// }
