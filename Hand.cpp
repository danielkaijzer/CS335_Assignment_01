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
#include <algorithm>

Hand::Hand(){} // default is sufficient for creating deque of PointCards

Hand::~Hand(){
    cards_.clear(); // empty hand
}

Hand::Hand(const Hand& other){
    cards_ = other.cards_;
}

Hand& Hand::operator=(const Hand& other){
    cards_ = other.cards_;
    return *this;
}

Hand::Hand(Hand&& other){
    cards_ = std::move(other.cards_);
}

Hand& Hand::operator=(Hand&& other){
    cards_ = std::move(other.cards_);
    return *this;
}

const std::deque<PointCard>& Hand::getCards() const{
    return cards_;
}

void Hand::addCard(PointCard&& card){
    cards_.push_back(std::move(card));
    // if card is drawn from deck, setDrawn is true
    cards_.back().setDrawn(true);
}

bool Hand::isEmpty() const{
    return (cards_.empty());
}

void Hand::Reverse(){

    // reverse deque using a stack

    std::stack<PointCard> tmp;

    while(!cards_.empty()){
        tmp.push(cards_.back());
        cards_.pop_back();
    }

    while(!tmp.empty()){
        cards_.push_front(tmp.top());
        tmp.pop();
    }
}

/**
 * @post: Play the card at the front of the hand, removing it from the hand
 * Throws an exception if the hand is empty or the card is not playable
 * If the card is not playable, the card is removed from the hand
 * @return the points earned from playing the card
 */
int Hand::PlayCard(){

    if (!isEmpty()){
        // card is playable if drawn and has valid instruction
        bool playable = cards_.front().isPlayable();

        std::string instr = cards_.front().getInstruction();

        // if card is played from hand, remove from hand
        cards_.pop_front();

        if (playable){
            return std::stoi(instr); // return point value of PointCard
        }
    }
    // can't play card if there isn't one in Hand
    throw("Hand empty or card not playable.");
}