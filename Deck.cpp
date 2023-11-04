
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
    cards_.clear(); // start with clean deck
}

template <class CardType>
Deck<CardType>::~Deck(){
    while (this->cards_.size() != 0){
        CardType cur = cards_.back();
        this->cards_.pop_back();
        // destructor for card will be called implicitly after popping
    }
}

template <class CardType>
void Deck<CardType>::AddCard(const CardType& card){
    cards_.push_back(card);
}

template <class CardType>
CardType&& Deck<CardType>::Draw(){

    if (!IsEmpty()){
        cards_.back().setDrawn(true);
        // CardType&& cur = std::move(cards_.back()); // works for Deck
        CardType cur = std::move(cards_.back()); // works for Player
        cards_.pop_back();
        return std::move(cur);
    }
}

template <class CardType>
bool Deck<CardType>::IsEmpty() const{
    return (cards_.size() == 0);
}

template <class CardType>
void Deck<CardType>::Shuffle(){
    std::mt19937 rand;
    rand.seed(2028358904);
    std::shuffle(cards_.begin(), cards_.end(), rand);
}

template <class CardType>
int Deck<CardType>::getSize() const{
    return this->cards_.size();
}

template <class CardType>
std::vector<CardType> Deck<CardType>::getDeck() const{
    return cards_;
}