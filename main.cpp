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

#include "Card.hpp"
#include "PointCard.hpp"
#include "ActionCard.hpp"
#include "Deck.hpp"

// use to run: clang++ -std=c++17 main.cpp Card.cpp PointCard.cpp ActionCard.cpp Deck.cpp -L. -o main

int main() {
  // Create a new PointCard object
  PointCard pc1;

  Deck<PointCard> d1;

  pc1.setInstruction("5 points");
  pc1.Print();

  PointCard pc2 = pc1;
  pc2.Print();

  ActionCard ac1;
  std::cout<< ac1.isPlayable() << std::endl;
  ac1.setInstruction("SWAP 3 CARD(S)");
  ac1.setDrawn(true);
  std::cout<< ac1.isPlayable() << std::endl;

  ActionCard ac2 = ac1;

  ac2.Print();





  return 0;
}