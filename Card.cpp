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
    // delete &cardType_;
    // delete &instruction_;
    // delete &bitmap_;
}

// Copy Constructor
Card::Card(const Card & rhs){
    // cardType_ = new cardType{*rhs.cardType_};
    // instruction_ = new std::string{*rhs.instruction_};
    // bitmap_ = new int{*rhs.bitmap_};
}

// Copy Assignment Operator
Card & Card::operator=(const Card& rhs){
    if (this != &rhs){
        // *cardType_ = *rhs.cardType_;
        // *instruction_ = *rhs.instruction_;
        // *image_ = *rhs.image_;
    }
    return *this;
}

// Move Constructor
Card::Card(Card && rhs){
    // type_ = rhs.type_;
    // delete rhs.type_;
    // rhs.type_ = nullptr;

    // text_ = rhs.text_;
    // delete rhs.text_;
    // rhs.text_ = nullptr; 

    // image_ = std::move(rhs.image_);
}

// Move Assignment Operator
Card & Card::operator=(Card && rhs){
    // Use std::swap for all data members
    // std::swap(type_,rhs.type_);
    // std::swap(text_, rhs.text_);
    // std::swap(image_, rhs.image_);
    return *this;
}

Card::Card(){
    drawn_ = false;
}

std::string Card::getType() const{
    if (cardType_ == POINT_CARD)
        return "POINT_CARD";
    else
        return "ACTION_CARD";
}

void Card::setType(const CardType& type){
    instruction_ = type;
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