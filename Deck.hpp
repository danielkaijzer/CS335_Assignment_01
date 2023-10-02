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
#include "PointCard.hpp"
#include <vector>

template <class Card>
class Deck{
private:
    std::vector<Card> cards_;
    int deck_size_ = cards_.size();

public:
    Deck(); // Default Constructor
    ~Deck();

    // used when decks are initially constructed from cards in the file

    // CAN ALSO TRY DOING void AddCard(ItemType new_card)
    void AddCard(Card new_card);

    void Draw();
    void Shuffle();

    bool isEmpty();


    void Print(); // Test method
};

#include "Deck.cpp"

#endif