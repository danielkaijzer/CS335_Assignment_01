/**
 * @file CardGame.hpp
 * @author Daniel Kaijzer
 * @brief 
 * @version 0.1
 * @date 2023-09-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef CARD_GAME_
#define CARD_GAME_

#include <iostream>
#include <fstream>
#include <sstream>

#include "Deck.hpp"
#include "Player.hpp"

class CardGame{
    private:
        const int TARGET_SCORE_ = 50;

        // Helper methods for CardGame()

        /**
         * @brief // parses info from Input file
         * and creates relevant card objects to
         * populate the two Decks (ActionCardDeck and 
         * PointCardDeck)
         * 
         */
        void readFromInputFile(); 

        void CreateDeck();

        void CreateCard();
    public:
        CardGame(); // Default Constructor
        CardGame(std::ifstream& input_file); //Paramerized Constructor

        void StartGame();

};

#include "CardGame.cpp"

#endif