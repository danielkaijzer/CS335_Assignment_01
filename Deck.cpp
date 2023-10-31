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

template <class CardType>
Deck<CardType>::Deck(){

}

template <class CardType>
Deck<CardType>::~Deck(){
 //
}

template <class CardType>
void Deck<CardType>::AddCard(const CardType& card){
    cards_.push_back(card);
}

template <class CardType>
CardType&& Deck<CardType>::Draw(){

    if (!IsEmpty()){
        CardType&& cur = cards_.back();
        cards_.pop_back();

        return cur;

    }

    return;



    // access card at top of deck

    // if actioncard, execute instruction
    // Card current_card = cards_.back();
    // if (cards_.back().getType() == "Action"){
    //     cards_.back().Play();
    // }
    // else if (cards_.back().getType() == "Points"){
    //     // add points card to Hand
    // }

    // cards_.pop_back();

    // // return current_card;

    // // if pointcard, add card to hand

    // return;
}

template <class CardType>
void Deck<CardType>::Shuffle(){
    return;
}

template <class CardType>
bool Deck<CardType>::IsEmpty() const{
    return (cards_.size() == 0);
}