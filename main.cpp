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
#include "Hand.hpp"
#include "Player.hpp"

// use to run: clang++ -std=c++17 main.cpp Card.cpp PointCard.cpp ActionCard.cpp Hand.cpp Player.cpp -L. -o main

int main() {
  // Create a new PointCard object
  PointCard pc1;

  Deck<PointCard> *d1 = new Deck<PointCard>();

  pc1.setInstruction("5");
  // pc1.Print();

  PointCard pc2 = pc1;
  pc2.setInstruction("3");
  // pc2.Print();

  d1->AddCard(pc1);
  d1->AddCard(pc2);
  // std::cout << d1->getSize() << std::endl;

  Hand h1;


  // h1.addCard(d1->Draw());
  // h1.addCard(d1->Draw());

  // int score =0;
  
  // while (!h1.isEmpty()){
  //   score += h1.PlayCard();
  //   std::cout << score << std::endl;
  // }

  Player p1;
  p1.setHand(h1);
  p1.setPointDeck(d1);
  p1.drawPointCard();
  p1.playPointCard();

  std::cout <<  p1.getScore() << std::endl;


  // ActionCard ac1;
  // std::cout<< ac1.isPlayable() << std::endl;
  // ac1.setInstruction("SWAP 3 CARD(S)");
  // ac1.setDrawn(true);
  // std::cout<< ac1.isPlayable() << std::endl;

  // ActionCard ac2 = ac1;

  // ac2.Print();

  // d1->AddCard(pc1);

  // Player p1;
  // p1.setPointDeck(d1);
  // std::string output = d1->Draw();
  // p1.drawPointCard();
  // p1.playPointCard();


  // std::cout << p1.getScore() << std::endl;




  return 0;
}