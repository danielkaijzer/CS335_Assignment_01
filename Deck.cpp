/**
 * @file Deck.cpp
 * @author Daniel Kaijzer
 * @brief 
 * @version 0.1
 * @date 2023-09-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "Deck.hpp"

template <class Card>
Deck<Card>::Deck(){

}

template <class Card>
void Deck<Card>::Print(){
    for (auto itr = cards_.begin(); itr != cards_.end(); ++itr){
        std::cout << itr->getText() << std::endl;
    }
}

template <class Card>
Deck<Card>::~Deck(){
 //
}

template <class Card>
void Deck<Card>::AddCard(Card new_card){
    cards_.push_back(new_card);
}

template <class Card>
void Deck<Card>::Draw(){
    // access card at top of deck

    // if actioncard, execute instruction
    // Card current_card = cards_.back();
    if (cards_.back().getType() == "Action"){
        cards_.back().Play();
    }
    else if (cards_.back().getType() == "Points"){
        // add points card to Hand
    }

    cards_.pop_back();

    // return current_card;

    // if pointcard, add card to hand

    return;
}

template <class Card>
void Deck<Card>::Shuffle(){
    return;
}

template <class Card>
bool Deck<Card>::isEmpty(){
    return (deck_size_ == 0);
}