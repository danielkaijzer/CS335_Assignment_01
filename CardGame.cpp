/**
 * @file CardGame.cpp
 * @author Daniel Kaijzer
 * @brief 
 * @version 0.1
 * @date 2023-09-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "CardGame.hpp"

CardGame::CardGame(){

}

CardGame::CardGame(std::ifstream& input_file){

    if (!input_file.is_open()){
        std::cerr << "Error opening input file.\n";
        return;
    }
    std::string line, type, text;


    // BUG TO FIX: CANNOT CREATE MORE THAN ONE DECK WITHOUT GETTING:
    // libc++abi: terminating with uncaught exception of type std::bad_alloc: std::bad_alloc
    // Abort trap: 6

    Deck<ActionCard> ActionDeck;
    // Deck<PointCard> PointDeck;

    while(getline(input_file,line)){
        // std::cout << line << std::endl;
        std::stringstream ss(line);
        std::string word;

        ss >> word;

        if (word == "type:"){
            ss >> type;
            // if (type == "action"){
            //     ActionCard new_Card;
            // }
            // else if(type == "point"){
            //     PointCard new_Card;
            // }
            // std::cout << type << std::endl;
        }
        else if (word == "text:"){
            // text = line;

            text.clear();

            while (ss >> word){
                text+=word;
                text += " ";
            }

            // c1.setText(text);

            if (type == "action"){
                ActionCard newActionCard(text);
                ActionDeck.AddCard(newActionCard);
                std::cout << newActionCard.getText() << std::endl;
            }
            else if (type == "points"){
                PointCard newPointCard(text);
                // PointDeck.AddCard(newPointCard);
                std::cout << newPointCard.getText() << std::endl;
            }
        }

    }

    // ActionDeck.Print();
    // PointDeck.Print();

    // make some code to parse through input file

    // first line will be type:

    // second line will be text: instruction or points_amount

    // third line will be image (build vector of ints)

    // fourth line will be copies (number of copies to populate deck)

    // space

    // repeat

    // eventually we get a shuffle value

}

void CardGame::StartGame(){

}