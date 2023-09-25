/**
 * @file main.cpp
 * @author Daniel Kaijzer
 * @brief Testing file for Assignment 1 classes
 * @version 0.2
 * @date 2023-09-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "CardGame.hpp"

using namespace std;

int main(){
    std::ifstream infile("input_0.txt");    

    CardGame c1 = CardGame(infile);

    // ActionCard c1;
    // c1.Play();

    // Deck<int> d1;
    // std::cout << d1.isEmpty() << std::endl;
}