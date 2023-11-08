/**
 * @file ActionCard.cpp
 * @author Daniel Kaijzer
 * @brief 
 * @version 0.1
 * @date 2023-09-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "ActionCard.hpp"

/**
 * @post: Construct a new Action Card object
*/
ActionCard::ActionCard() : Card(){
    this->setType(ACTION_CARD);
}

/**
 * @return true if the card is playable, false otherwise
 * For a card to be playable, 
 * it has to be drawn and the instruction has to be valid
 * 
 * Valid instructions:
 * DRAW x CARD(S) : assume x is a positive integer
 * PLAY x CARD(S) : assume x is a positive integer
 * REVERSE HAND : reverse the order of the cards in the hand
 * SWAP HAND WITH OPPONENT : swap the hand with the opponent
*/
bool ActionCard::isPlayable(){
    if (getDrawn()){

        std::string instr = getInstruction();

        // check if it's one of the four instruction types
        if(
            instr.substr(0,4) == "DRAW"
            || instr.substr(0,4) == "PLAY"
            || instr.substr(0,7) == "REVERSE"
            || instr.substr(0,4) == "SWAP")
        {
            return true;
        }
    }
    return false;
}

/**
 * @post: Print the ActionCard in the following format:
 * Type: [CardType]
 * Instruction: [Instruction]
 * Card: 
 * [ImageData]
 * 
 * Note: For [ImageData]: If there is no image data, print "No image data" instead
 */
void ActionCard::Print() const{
    std::cout << "Type: " << getType() << std::endl;
    std::cout << "Instruction: "<< getInstruction() << std::endl;
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