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

void Hand::Reverse(){
    // Reverse order we push and pop from hand

    reverse_flag_ = true;

    return;
}

void Hand::PlayCard(){
    if (!reverse_flag_){
        hand.back().Play();
        // delete PointCard object here?
        hand.pop_back();
    }
    else{
        hand.front().Play();
        // delete PointCard object here?
        hand.pop_front();
    }


    
}

void Hand::AddCard(PointCard new_card){
    if (!reverse_flag_){
        hand.push_front(new_card);
    }
    else{
        hand.push_back(new_card);
    }

}