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
        ActionCard() = default;
        ActionCard(std::string text);

        int Play() override;
    private:
        std::string instructions_;
        // method to parse from input file and translate it to executable instructions
        void getInstructionsfromInput();
        // executes instructions
        void executeInstructions();
};

#include "ActionCard.cpp"
#endif