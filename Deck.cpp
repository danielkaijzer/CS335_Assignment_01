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
    while (this->cards_ != 0){
        this->cards_.pop_back();
    }
}

template <class CardType>
void Deck<CardType>::AddCard(const CardType& card){
    cards_.push_back(card);
}

template <class CardType>
CardType&& Deck<CardType>::Draw(){

    if (!IsEmpty()){
        CardType&& cur = std::move(cards_.back());
        cards_.pop_back();

        return cur;

    }

    return;
}

template <class CardType>
void Deck<CardType>::Shuffle(){
    return;
}

template <class CardType>
int Deck<CardType>::getSize() const{
    return this->cards_.size();
}

template <class CardType>
bool Deck<CardType>::IsEmpty() const{
    return (cards_.size() == 0);
}