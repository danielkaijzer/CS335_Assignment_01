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

PointCard::PointCard(std::string text){
    this->setText(text);
}

int PointCard::textToInt(){
    return 0;
}

int PointCard::Play(){
    int points = points_for_this_card;

    std::cout << "Play point card\n";

    return points;
}

int PointCard::getPoints(){
    return points_for_this_card;
}