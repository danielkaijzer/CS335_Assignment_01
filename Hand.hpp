/**
 * @file Hand.hpp
 * @author Daniel Kaijzer
 * @brief interface file for Hand class
 * 
 * Hand only contains point cards
 * and must maintain an order so that cards drawn first are scored first.
 * 
 * @version 0.1
 * @date 2023-09-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef HAND_
#define HAND_

#include <deque>
#include <PointCard.hpp>

class Hand{
    private:
        std::deque<PointCard> hand;
        bool reverse_flag_ = false;
    public:
        Hand(); // default constructor

        void PlayCard();

        void Reverse();
};

#include "Hand.cpp"

#endif
