/**
 * @file PointCard.cpp
 * @author Daniel Kaijzer
 * @brief 
 * @version 0.1
 * @date 2023-09-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "PointCard.hpp"

/**
 * @post: Construct a new Point Card object
 */
PointCard::PointCard() : Card() {
    setType(POINT_CARD);
}

/**
 * @return true if the card is playable, false otherwise
 * For a card to be playable, it has to be drawn and the instruction has to be a valid number
*/
bool PointCard::isPlayable(){

    // convert instruction to int value (for points)
    std::string s = getInstruction();
    int si = std::stoi(s);

    // if getDrawn() is true and points are between (inclusive) 1 and 99
    if (getDrawn() && si >= 1 && si <= 99){
        return true;
    }

    return false;
}

/**
 * @post: Print the Point Card in the following format:
 * Type: [CardType]
 * Points: [Instruction]
 * Card: 
 * [ImageData]
 * 
 * Note: For [ImageData]: If there is no image data, print "No image data" instead
 */
void PointCard::Print() const{

    std::cout << "Type: " << this->getType() << std::endl;
    std::cout << "Points: "<< this->getInstruction() << std::endl;
    std::cout << "Card: " << std::endl;

    // iterate through bitmap array and print all 80 values
    // only if there is data there
    if (getImageData() != nullptr){
        for (int i = 0; i < 80; ++i){
            std::cout << *getImageData();
        }
    }
    else{
        std::cout << "No image data";
    }
    std::cout << "\n";
}