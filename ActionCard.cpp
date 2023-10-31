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
    setType(POINT_CARD);
}


bool ActionCard::isPlayable(){
    return false;

}

void ActionCard::Print() const{
    std::cout << "Hello World\n";
}

//     // - Draw x card(s).
//     // - Play x card(s).
//     // - Reverse hand.
//     // - Swap hand with opponent.

// }