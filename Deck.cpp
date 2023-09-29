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

template <class ItemType>
Deck<ItemType>::Deck(){

}

template <class ItemType>
void Deck<ItemType>::Print(){
    for (auto itr = cards_.begin(); itr != cards_.end(); ++itr){
        std::cout << itr->getText() << std::endl;
    }
}

template <class ItemType>
Deck<ItemType>::~Deck(){
 //
}

template <class ItemType>
void Deck<ItemType>::AddCard(ItemType new_card){
    cards_.push_back(new_card);
}

template <class ItemType>
void Deck<ItemType>::Draw(){
    return;
}

template <class ItemType>
void Deck<ItemType>::Shuffle(){
    return;
}

template <class ItemType>
bool Deck<ItemType>::isEmpty(){
    return (deck_size_ == 0);
}