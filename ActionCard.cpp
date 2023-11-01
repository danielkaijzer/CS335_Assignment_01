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
    return false;

}

void ActionCard::Print() const{
    std::cout << getInstruction();
}