/**
 * @file CardGame.hpp
 * @author Daniel Kaijzer
 * @brief 
 * @version 0.1
 * @date 2023-09-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef CARD_GAME_
#define CARD_GAME_

class CardGame{
    private:
        const int TARGET_SCORE_ = 50;
    public:
        CardGame(); // Default Constructor

        void StartGame();
};

#include "CardGame.cpp"

#endif