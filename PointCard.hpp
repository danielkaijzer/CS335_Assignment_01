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
public:
    PointCard() = default;
    PointCard(std::string text);

    int Play() override;
    // int textToInt();
private:
    // int points_for_this_card = 1;
    // int getPoints();
};

#include "PointCard.cpp"

#endif

