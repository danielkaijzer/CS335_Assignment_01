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
    if (bitmap_ != nullptr){
        delete[] bitmap_;
    }
    bitmap_ = nullptr;
}

// Copy Constructor
Card::Card(const Card & rhs){
    cardType_ = rhs.cardType_;
    instruction_ = rhs.instruction_;
    drawn_ = rhs.drawn_;
    bitmap_ = rhs.bitmap_;
}

// Copy Assignment Operator
Card & Card::operator=(const Card& rhs){
    cardType_ = rhs.cardType_;
    instruction_ = rhs.instruction_;
    drawn_ = rhs.drawn_;
    bitmap_ = rhs.bitmap_;
    return *this;
}

// Move Constructor
Card::Card(Card && rhs){
    cardType_ = std::move(rhs.cardType_);
    instruction_ = std::move(rhs.instruction_);
    drawn_ = std::move(rhs.drawn_);
    bitmap_ = std::move(rhs.bitmap_);

    // reset moved-from object members
    rhs.instruction_ ="";
    rhs.drawn_ = false;
    rhs.bitmap_ = nullptr;

}

// Move Assignment Operator
Card & Card::operator=(Card && rhs){

    cardType_ = std::move(rhs.cardType_);
    instruction_ = std::move(rhs.instruction_);
    drawn_ = std::move(rhs.drawn_);
    
    // Delete the current bitmap if it's not owned by this object
    if (bitmap_ != rhs.bitmap_) {
        delete[] bitmap_;
    }
    bitmap_ = std::move(rhs.bitmap_);

    // reset moved-from object members
    rhs.instruction_ ="";
    rhs.drawn_ = false;
    rhs.bitmap_ = nullptr;

    return *this;
}

Card::Card(){
    instruction_ = "";
    bitmap_ = nullptr;
    drawn_ = false;
    
}

/**
 * @return the string representation of the card type
 */
std::string Card::getType() const{
    if (cardType_ == POINT_CARD){
        return "POINT_CARD";
    }
    else{
        return "ACTION_CARD";
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