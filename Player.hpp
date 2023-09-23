/**
 * @file Player.hpp
 * @author Daniel Kaijzer
 * @brief 
 * @version 0.1
 * @date 2023-09-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef PLAYER_
#define PLAYER_

#include "Hand.hpp"

class Player{
private:
    Hand hand_;
    int score_;
public:
    Player() = default;

};

#include "Player.cpp"

#endif