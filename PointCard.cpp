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
    setType(POINT_CARD);
}

bool PointCard::isPlayable(){

    std::string s = getInstruction();
    int si = std::stoi(s);

    if (getDrawn() && si > 0){
        return true;
    }

    return false;
}

void PointCard::Print() const{

    std::cout << "Type: " << getType() << std::endl;
    std::cout << "Points: "<< getInstruction() << std::endl;
    std::cout << "Card: ";
    if (getImageData() != 0){
        std::cout << getImageData() << std::endl;
    }
    else{
        std::cout << "No image data" << std::endl;
    }
}