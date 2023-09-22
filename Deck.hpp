/**
 * @file Deck.hpp
 * @author Daniel Kaijzer
 * @brief 
 * @version 0.1
 * @date 2023-09-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef DECK_
#define DECK_

#include "ActionCard.hpp"
#include <vector>

template <class ItemType>
class Deck{
    private:
        int deck_size_ = 0;
        std::vector<ItemType> cards_;

    public:
        Deck(); // Default Constructor
        ~Deck();

        void AddCard();
        void Draw();
        void Shuffle();

        bool isEmpty();


        void Print(); // Test method
};

#include "Deck.cpp"

#endif