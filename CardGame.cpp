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

    Deck<ActionCard> d1;

    // std::vector<ActionCard> ActionCards;
    // std::vector<PointCard> PointCards;
    // ActionCard c1;

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

            while (ss >> word){
                text+=word;
                text += " ";
            }

            // c1.setText(text);

            if (type == "action"){
                ActionCard newCard(text);
                d1.AddCard(newCard);
            }
        }

    }

    d1.Print();

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