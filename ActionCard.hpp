/**
 * @file ActionCard.hpp
 * @author Daniel Kaijzer
 * @brief ActionCard class, derived from Card class. Interface file.
 * @version 0.1
 * @date 2023-09-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef ACTION_CARD_
#define ACTION_CARD_

#include "Card.hpp"

class ActionCard : public Card {
    public:
    /**
    * @post: Construct a new Action Card object
    */
    ActionCard() = default;

    /**
     * @return true if the card is playable, false otherwise
     * For a card to be playable, it has to be drawn and the instruction has to be valid
     * Valid instructions:
     * DRAW x CARD(S) : assume x is a positive integer
     * PLAY x CARD(S) : assume x is a positive integer
     * REVERSE HAND : reverse the order of the cards in the hand
     * SWAP HAND WITH OPPONENT : swap the hand with the opponent
    */
    virtual bool isPlayable() override;

    /**
     * @post: Print the ActionCard in the following format:
     * Type: [CardType]
     * Instruction: [Instruction]
     * Card:
     * [ImageData]
     *
     * Note: For [ImageData]: If there is no image data, print "No
        image data" instead
    */
    virtual void Print() const override;

    private:
        // std::string instructions_;
        // method to parse from input file and translate it to executable instructions
        // void getInstructionsfromInput();
        // // executes instructions
        // void executeInstructions();
};

#include "ActionCard.cpp"
#endif