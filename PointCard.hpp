/**
 * @file PointCard.hpp
 * @author Daniel Kaijzer
 * @brief 
 * @version 0.1
 * @date 2023-09-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef POINT_CARD_
#define POINT_CARD_

#include "Card.hpp"

class PointCard : public Card
{
private:
public:
    PointCard() = default;
    void Play() override;
    int textToInt();
};

#include "PointCard.cpp"

#endif

