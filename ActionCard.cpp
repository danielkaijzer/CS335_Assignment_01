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

ActionCard::ActionCard(std::string text){
    this->setType("Action");
    this->setText(text);
}

int ActionCard::Play(){
    std::cout << "Play Action Card\n";
    return 0;
}


// method to parse from input file and translate it to executable instructions
void ActionCard::getInstructionsfromInput(){
    std::cout << "Get ActionCard instructions\n";
}

void ActionCard::executeInstructions(){

    // - Draw x card(s).
    // - Play x card(s).
    // - Reverse hand.
    // - Swap hand with opponent.

    // if draw 1 cards

}