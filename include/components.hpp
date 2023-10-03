#pragma once 

namespace Components{
    namespace Global{
        inline bool gameOver;
    }
    struct player_score{
        double score;
    };
    struct game_status{
        bool gameOver;
    };
    struct source{
        unsigned int amount;
        double production;
    };
}