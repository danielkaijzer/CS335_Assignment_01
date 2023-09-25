/**
 * @file Card.hpp
 * @author Daniel Kaijzer
 * @brief 
 * @version 0.3
 * @date 2023-09-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef CARD_
#define CARD_

#include <iostream>
#include <vector>


class Card{
    private:
        std::string *type_;
        std::string *text_;
        std::vector<int> *image_;

    public:
        Card() = default; // default constructor

        // BIG 5

        // Copy Constructor
        Card(const Card & rhs);

        // Copy Assignment Operator
        Card & operator=(const Card & rhs);

        // Move Constructor
        Card(Card && rhs);

        // Move Assignment Operator
        Card & operator=(Card && rhs);

        // Destructor
        ~Card();

        void setType(std::string *type);
        void setText(std::string *text);
        void setImage(std::vector<int> *image);

        void convertInputStringtoType(std::string type);
        void convertInputStringtoText(std::string text);
        void convertInputStringtoImage(std::string image);


        void Print(); // Test method

        virtual int Play() =0;
};

#include "Card.cpp"

#endif