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

// use to run: clang++ -std=c++17 main.cpp Card.cpp PointCard.cpp ActionCard.cpp  -L. -o main

int main() {
  // Create a new PointCard object
  PointCard pc1;

  pc1.setInstruction("5 points");

  int*image_data = new int[80];
  for (int i=0; i < 5; ++i){
    image_data[i] = 0;
  }
  pc1.setImageData(image_data);

  pc1.Print();

  PointCard pc2 = pc1;
  pc2.Print();

  // ActionCard ac1;
  // std::cout<< ac1.isPlayable() << std::endl;
  // ac1.setInstruction("SWAP");
  // ac1.setDrawn(true);

  // std::cout<< ac1.isPlayable() << std::endl;

  // ac1.Print();

  // Print the card type
//   std::cout << "Card type: " << pointCard.getType() << std::endl;
//   std::cout << "Card type: " << pointCard.getInstruction() << std::endl;

  return 0;
}