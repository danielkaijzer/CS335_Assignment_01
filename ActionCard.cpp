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

ActionCard::ActionCard(){
    setType(ACTION_CARD);
}


bool ActionCard::isPlayable(){
    if (getDrawn()){

        if(
            getInstruction().substr(0,4) == "DRAW"
            || getInstruction().substr(0,4) == "PLAY"
            || getInstruction().substr(0,7) == "REVERSE"
            || getInstruction().substr(0,4) == "SWAP")
        {
            return true;
        }
    }

    return false;

}

void ActionCard::Print() const{
    std::cout << "Type: " <<getType() << std::endl;
    std::cout << "Instruction: "<< getInstruction() << std::endl;
    
    std::cout << "Card: ";
    if (getImageData() != 0){
        std::cout << getImageData() << std::endl;
    }
    else{
        std::cout << "No image data" << std::endl;
    }
}