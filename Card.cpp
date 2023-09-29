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

// Parameterized Constructor
// Card::Card(std::string type, std::string text){
//     type_ = new std::string(type);
//     text_ = new std::string(text);
// }

// Copy Constructor
// Card::Card(const Card & rhs){
//     type_ = new std::string{*rhs.type_};
//     text_ = new std::string{*rhs.text_};
//     // image_ = new std::vector<int>{*rhs.image_};
// }

// Copy Assignment Operator
// Card & Card::operator=(const Card & rhs){
//     if (this != &rhs){
//         *type_ = *rhs.type_;
//         *text_ = *rhs.text_;
//         // *image_ = *rhs.image_;
//     }
//     return *this;
// }

// Move Constructor
// Card::Card(Card && rhs){
//     type_ = rhs.type_;
//     delete rhs.type_;
//     rhs.type_ = nullptr;

//     text_ = rhs.text_;
//     delete rhs.text_;
//     rhs.text_ = nullptr; 

//     // image_ = std::move(rhs.image_);
// }

// Move Assignment Operator
// Card & Card::operator=(Card && rhs){
//     // Use std::swap for all data members
//     std::swap(type_,rhs.type_);
//     std::swap(text_, rhs.text_);
//     // std::swap(image_, rhs.image_);
//     return *this;
// }

// Destructor
Card::~Card(){
    // delete type_;
    // delete text_;
    // delete image_;
}

void Card::setType(std::string type){
    type_ = type;
}

void Card::setText(std::string text){
    text_ = text;

}
// void Card::setImage(std::vector<int> *image){
//     image_ = image;
// }

std::string Card::getText(){
    return text_;
}

// void Card::convertInputStringtoType(std::string type){

// }

// void Card::convertInputStringtoText(std::string text){

// }

// void Card::convertInputStringtoImage(std::string image){

// }


void Card::Print(){
    std::cout << "Hello world" << std::endl;
}