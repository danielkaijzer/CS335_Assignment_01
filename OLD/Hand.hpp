/**
 * @file Hand.hpp
 * @author Daniel Kaijzer
 * @brief interface file for Hand class
 * 
 * Hand only contains point cards
 * and must maintain an order so that cards drawn first are scored first.
 * 
 * @version 0.1
 * @date 2023-09-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef HAND_
#define HAND_

#include <deque>
#include "PointCard.hpp"

class Hand{
    private:
        std::deque<PointCard> hand;
        bool reverse_flag_ = false;
        int score_ = 0;
    public:
/**
 * @post: Construct a new Hand object
*/ Hand();

/**
 * @post: Destroy the Hand object
*/  ~Hand();

/**
 * Copy Constructor
 * @param: other Hand object
 */
Hand(const Hand& other);

/**
 * Copy Assignment Operator
 * @param: other Hand object
 * @return this Hand
 */
Hand& operator=(const Hand& other);

/**
 * Move Constructor
 * @param: other Hand object
 */
Hand(Hand&& other);

/**
 * Move assignment operator
 * @param: other Hand object
 * @return this Hand
 */
Hand& operator=(Hand&& other);

/**
 * @return Hand
*/
const std::deque<PointCard>& getCards() const;

/**
 * @post: Add a card to the hand
 * @param PointCard object
 */
void addCard(PointCard&& card);

/**
 * @return true if hand is empty, false otherwise
 */
bool isEmpty() const;

/**
 * @post: Reverse the hand
 */
void Reverse();

/**
 * @post: Play the card at the front of the hand, removing it from the
    hand
 * Throws an exception if the hand is empty or the card is not playable
 * If the card is not playable, the card is removed from the hand
 * @return the points earned from playing the card
 */
int PlayCard();

};

#include "Hand.cpp"

#endif
