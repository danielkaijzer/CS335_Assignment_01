/**
 * @file Card.cpp
 * @author Daniel Kaijzer
 * @brief Card (abstract class) implementation
 * @date 2023-09-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "Card.hpp"

/**
 * Destructor
 * @post: Destroy the Card object
*/
Card::~Card(){
    if (bitmap_ != nullptr){
        delete[] bitmap_;
    }
    bitmap_ = nullptr;
}

/**
 * Copy Constructor
 * @post: Construct a new Card object
 * @param: const reference to a Card object
*/
Card::Card(const Card & rhs){
    cardType_ = rhs.cardType_;
    instruction_ = rhs.instruction_;
    drawn_ = rhs.drawn_;

    // check if rhs.bitmap has data before copying
    if (rhs.bitmap_ == nullptr){
        bitmap_ = nullptr;
    }
    else
    {
        bitmap_ = new int[80];
        for (int i = 0; i < 80; ++i)
            bitmap_[i] = rhs.bitmap_[i];
    }
}

/**
 * Copy Assignment Operator
 * @param const reference to a Card object
 * @return this Card object
 */
Card& Card::operator=(const Card& rhs)
{
    cardType_ = rhs.cardType_;
    instruction_ = rhs.instruction_;
    drawn_ = rhs.drawn_;

    // clear current bitmap data before copying
    if (bitmap_ != nullptr){
        delete[] bitmap_;
    }

    // check if rhs.bitmap has data before copying
    if (rhs.bitmap_ != nullptr)
    {
        bitmap_ = new int[80];
    
        for (size_t i = 0; i < 80; i++)
            bitmap_[i] = rhs.bitmap_[i];
    }
    else{
        bitmap_ = nullptr;
    }
    
    return *this;
}

/**
 * Move Constructor
 * @param: rvalue reference to a Card object 
*/
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

/**
 * Move assignment operator
 * @param: rvalue reference to a Card object
 * @return this card object
*/
Card& Card::operator=(Card&& rhs)
{
    cardType_ = std::move(rhs.cardType_);
    instruction_ = std::move(rhs.instruction_);
    drawn_ = std::move(rhs.drawn_);
    bitmap_ = std::move(rhs.bitmap_);

    // reset moved-from object members
    rhs.instruction_ ="";
    rhs.drawn_ = false;
    rhs.bitmap_ = nullptr;

    return *this;
}

/**
 * Default Constructor
 * @post: Construct a new Card object 
 */
Card::Card(){
    cardType_ = ACTION_CARD;
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

/**
 * @post: set the card type
 * @param const reference to a CardType object
 */
void Card::setType(const CardType& type){
    cardType_ = type;
}

/**
 * @post: set the card instruction
 * @param: const reference to an instruction 
 */
void Card::setInstruction(const std::string& instruction){
    instruction_ = instruction;

}

/**
 * @post: Set the image data
 * @param pointer to an array of integers
 */
void Card::setImageData(int* data){

    bitmap_ = data;
}

/**
 * @return the string representation of the card instruction
*/
const std::string& Card::getInstruction() const{
    return instruction_;
}

/**
 * @return the image data
 */
const int* Card::getImageData() const{
    return bitmap_;
}

/**
 * @return the drawn status of the card
*/
bool Card::getDrawn() const{
    return drawn_;
}

/**
 * @post: set the drawn status of the card
 * 
 * @param: const reference to a boolean
 */
void Card::setDrawn(const bool& drawn){
    drawn_ = drawn;
}