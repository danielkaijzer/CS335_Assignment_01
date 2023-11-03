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

PointCard::PointCard(){
    this->setType(POINT_CARD);
}

bool PointCard::isPlayable(){

    std::string s = getInstruction();
    int si = std::stoi(s);

    if (getDrawn() && si >= 0){
        return true;
    }

    return false;
}

void PointCard::Print() const{

    std::cout << "Type1: " << this->getType() << std::endl;
    std::cout << "Points: "<< this->getInstruction() << std::endl;
    std::cout << "Card: ";
    if (getImageData() != nullptr){
        for (int i = 0; i < 80; ++i){
            std::cout << *getImageData();
        }
    }
    else{
        std::cout << "No image data" << std::endl;
    }
    std::cout << "\n";
}