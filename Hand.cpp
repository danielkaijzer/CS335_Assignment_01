/**
 * @file Hand.cpp
 * @author Daniel Kaijzer
 * @brief implementation file for Hand class
 * @version 0.1
 * @date 2023-09-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "Hand.hpp"

Hand::Hand(){

}

Hand::~Hand(){
    while(!this->isEmpty()){
        cards_.pop_back();
    }

}


Hand::Hand(const Hand& other){
    for (auto card : other.cards_){
        this->cards_.push_back(card);
    }
}

Hand& Hand::operator=(const Hand& other){
    Hand(other);
    return *this;
}

Hand::Hand(Hand&& other){
    this->cards_ = std::move(other.cards_);
}

Hand& Hand::operator=(Hand&& other){
    std::swap(this->cards_,other.cards_);
    return *this;
}

const std::deque<PointCard>& Hand::getCards() const{
    return cards_;
}

void Hand::addCard(PointCard&& card){
    cards_.push_back(card);
}

bool Hand::isEmpty() const{
    return (cards_.size() == 0);
}

void Hand::Reverse(){
    cards_.front() = cards_.back();
}

/**
 * @post: Play the card at the front of the hand, removing it from the hand
 * Throws an exception if the hand is empty or the card is not playable
 * If the card is not playable, the card is removed from the hand
 * @return the points earned from playing the card
 */
int Hand::PlayCard(){
    if (!isEmpty()){
        PointCard cur = std::move(cards_.front());
        cards_.pop_front();
        if (cur.isPlayable()){
            return std::stoi(cur.getInstruction());
        }
    }
    throw("Hand empty or card not playable.");
    return 0;
}

////

// void Hand::Reverse(){
//     // Reverse order we push and pop from hand

//     reverse_flag_ = true;

//     return;
// }

// void Hand::PlayCard(){
//     if (!reverse_flag_){
//         hand.back().Play();
//         // delete PointCard object here?
//         hand.pop_back();
//     }
//     else{
//         hand.front().Play();
//         // delete PointCard object here?
//         hand.pop_front();
//     }


    
// }

// void Hand::AddCard(PointCard new_card){
//     if (!reverse_flag_){
//         hand.push_front(new_card);
//     }
//     else{
//         hand.push_back(new_card);
//     }

// }