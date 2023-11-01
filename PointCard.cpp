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
    return false; // TEMP
}

void PointCard::Print() const{
    std::cout << getInstruction();
}