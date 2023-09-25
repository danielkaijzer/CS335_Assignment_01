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
    std::cout << "Hello World" << std::endl;
}

template <class ItemType>
Deck<ItemType>::~Deck(){
 //
}

/**
 * @brief used when decks are initially constructed from cards in the file
 * 
 * @return template <class ItemType> 
 */
template <class ItemType>
void Deck<ItemType>::AddCard(PointCard new_card){

    // make card and add to deck

    return;
}

template <class ItemType>
void Deck<ItemType>::AddCard(ActionCard new_card){

    // make card and add to deck
    
    return;
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