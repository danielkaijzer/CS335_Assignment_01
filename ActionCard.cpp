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




bool ActionCard::isPlayable(){
    return false;

}

void ActionCard::Print() const{
    std::cout << "Hello World\n";
}

// ActionCard::ActionCard(std::string text){
//     this->setType("Action");
//     this->setText(text);
// }

// int ActionCard::Play(){

//     this->executeInstructions();

//     return 0;
// }

// // method to parse from input file and translate it to executable instructions
// void ActionCard::getInstructionsfromInput(){
//     std::cout << "Get ActionCard instructions\n";
// }

// void ActionCard::executeInstructions(){

//     if (this->getText().substr(0,4) == "draw"){
//         // execute draw instructions
//         int num = std::stoi(this->getText().substr(5,6));
//         std::cout << "Draw " << num << std::endl;

//         // CALL DRAW X POINTCARD(S) FROM TOP OF POINTS DECK

//     }
//     else if(this->getText().substr(0,4) == "play"){
//         // execute play instructions
//         int num = std::stoi(this->getText().substr(5,6));
//         std::cout << "Play " << num << std::endl;

//         // CALL PLAY X POINTCARD(S) FROM HAND

//     }
//     else if(this->getText().substr(0,7) == "reverse"){
//         // call Reverse()
//         std::cout << "Reverse x\n";
//     }
//     else if(this->getText().substr(0,4) == "swap"){
//         // Call Swap()
//         std::cout << "Swap x\n";

//     }

//     // - Draw x card(s).
//     // - Play x card(s).
//     // - Reverse hand.
//     // - Swap hand with opponent.

// }