/**
 * @file Card.cpp
 * @author Daniel Kaijzer
 * @brief Implementation file for "Card" class
 * @version 0.3
 * @date 2023-09-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "Card.hpp"

// Destructor
Card::~Card(){
    delete this->bitmap_;
    bitmap_ = nullptr;
}

// Copy Constructor
Card::Card(const Card & rhs){
    cardType_ = rhs.cardType_;
    instruction_ = rhs.instruction_;
    // bitmap_ = new int{*rhs.bitmap_};
    bitmap_ = rhs.bitmap_;
    drawn_ = rhs.drawn_;
}

// // Copy Assignment Operator
Card & Card::operator=(const Card& rhs){
    if (this != &rhs){
        cardType_ = rhs.cardType_;
        instruction_ = rhs.instruction_;
        // bitmap_ = new int{*rhs.bitmap_};
        bitmap_ = rhs.bitmap_;
        drawn_ = rhs.drawn_;
    }
    return *this;
}

// // Move Constructor
Card::Card(Card && rhs){
    cardType_ = std::move(rhs.cardType_);
    instruction_ = std::move(rhs.instruction_);
    bitmap_ = std::move(rhs.bitmap_);
    drawn_ = std::move(rhs.drawn_);
}

// Move Assignment Operator
Card & Card::operator=(Card && rhs){
    // Use std::swap for all data members
    std::swap(cardType_,rhs.cardType_);
    std::swap(instruction_, rhs.instruction_);
    std::swap(bitmap_, rhs.bitmap_);
    std::swap(drawn_,rhs.drawn_);
    return *this;
}

Card::Card(){
    instruction_ = "";
    bitmap_ = nullptr;
    drawn_ = false;
}

std::string Card::getType() const{
    if (cardType_ == POINT_CARD)
        return "POINT_CARD";
    else if (cardType_ == ACTION_CARD){
        return "ACTION_CARD";
    }
    else{
        return "";
    }
}

void Card::setType(const CardType& type){
    cardType_ = type;
}

void Card::setInstruction(const std::string& instruction){
    instruction_ = instruction;

}

void Card::setImageData(int* data){

    bitmap_ = data;
}

const std::string& Card::getInstruction() const{
    return instruction_;
}

const int* Card::getImageData() const{
    return bitmap_;
}

bool Card::getDrawn() const{
    return drawn_;
}

void Card::setDrawn(const bool& drawn){
    drawn_ = drawn;
}