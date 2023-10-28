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



bool PointCard::isPlayable(){
    return false; // TEMP
}

void PointCard::Print() const{
    std::cout << "Hello World\n";
}

// PointCard::PointCard(std::string text){
//     this->setType("Point");
//     this->setText(text);
//     points_for_this_card = textToInt();

// }

// int PointCard::textToInt(){
//     return std::stoi(this->getText());
// }

// int PointCard::Play(){
//     int points = points_for_this_card;

//     std::cout << "Play point card\n";

//     return 0;
// }

// int PointCard::getPoints(){
//     return points_for_this_card;
// }