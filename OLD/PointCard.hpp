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

/**
 * @post: Construct a new Point Card object
 */
PointCard() = default;

/**
 * @return true if the card is playable, false otherwise
 * For a card to be playable, it has to be drawn and the instruction has
    to be a valid number
*/
bool isPlayable() override;

/**
 * @post: Print the Point Card in the following format:
 * Type: [CardType]
 * Points: [Instruction]
 * Card:
 * [ImageData]
 *
 * Note: For [ImageData]: If there is no image data, print "No image data
" instead
 */
void Print() const override;


    // PointCard() = default;
    // PointCard(std::string text);

    // int Play() override;
    // int getPoints();
private:
    // int textToInt();
    int points_for_this_card = 0;
};

#include "PointCard.cpp"

#endif

