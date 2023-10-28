/**
 * @file Deck.hpp
 * @author Daniel Kaijzer
 * @brief 
 * @version 0.1
 * @date 2023-09-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef DECK_
#define DECK_

#include "ActionCard.hpp"
#include "PointCard.hpp"
#include <vector>

template <class Card>
class Deck{
private:
    std::vector<Card> cards_;
    int deck_size_ = cards_.size();

public:

/**
 * @post: Construct a new Deck object
*/ 

Deck();

/**
 * @post: Destroy the Deck object
*/  
~Deck();

/**
 * @post: Add a Card to the Deck
 * @param: const reference to CardType card
 */
void AddCard(const CardType& card);

/**
 * @post: Draw a card from the deck
 * @pre: the deck is not empty
 * @return the right hand value of type CardType
 */
CardType&& Draw();

/**
 * @return if the deck is empty
 */
bool IsEmpty() const;
/**
 * @post: Shuffle the deck
 * Create a random number generator using std::mt19937 with seed
    2028358904,
 * then call std::shuffle on the vector of cards, and with the random
number generator as the third argument.
* https://en.cppreference.com/w/cpp/algorithm/random shuffle * https://en.cppreference.com/w/cpp/numeric/random/
mersenne twister engine */
void Shuffle();

/**
 * @return the size of the deck
 */
int getSize() const;

/**
 * @return the vector of cards in the deck
*/
std::vector<CardType> getDeck() const;

};

#include "Deck.cpp"

#endif