#pragma once 

namespace Components{
    namespace Global{
        inline bool gameOver;
    }
    struct player_score{
        double score;
    };
    struct source{
        unsigned int amount;
        double production;
        double cost;
    };
}