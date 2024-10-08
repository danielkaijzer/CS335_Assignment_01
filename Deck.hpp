/*
CSCI335 Fall 2023
Assignment 1 – Card Game
Name Daniel Kaijzer
Date 11/08/2023
Deck.hpp defines the Deck class and implements it.
*/
#ifndef DECK_HPP
#define DECK_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include "Card.hpp"
#include <random>


template <typename CardType>
class Deck 
{
    public:
        /**
         * @post: Construct a new Deck object
         */
        Deck() = default; // default is sufficient to construct vector of CardType objects

        /**
         * @post: Destroy the Deck object 
         */
        ~Deck(){
            cards_.clear(); // empty deck
        }

        /**
         * @post: Add a Card to the Deck
         * @param: const reference to CardType card
         */
        void AddCard(const CardType& card){
            cards_.push_back(card);
        }

        /**
         * @post: Draw a card from the deck
         * @pre: the deck is not empty
         * @return the right hand value of type CardType 
         */
        CardType&& Draw(){
            if (!IsEmpty()){
                // must return rvalue
                CardType &&drawn_card = std::move(cards_.back());

                cards_.pop_back(); // card is drawn, remove from deck
                return (std::move(drawn_card));
            }
            // can't draw from empty deck
            throw std::runtime_error("Deck is empty");
        }

        /**
         * @return if the deck is empty 
         */
        bool IsEmpty() const{
            return (cards_.empty());
        }

        /**
         * @post: Shuffle the deck 
         * Create a random number generator using std::mt19937 with seed 2028358904, 
         * then call std::shuffle on the vector of cards, and with the random number generator as the third argument.  
         * https://en.cppreference.com/w/cpp/algorithm/random_shuffle
         * https://en.cppreference.com/w/cpp/numeric/random/mersenne_twister_engine
         */
        void Shuffle(){
            std::mt19937 rand;
            rand.seed(2028358904);
            std::shuffle(cards_.begin(), cards_.end(), rand);
        }

        /**
         * @return the size of the deck 
         */
        int getSize() const{
            return cards_.size();
        }

        /**
         * @return the vector of cards in the deck 
         */
        std::vector<CardType> getDeck() const{
            return cards_;
        }

    private:
        std::vector<CardType> cards_;
};

#endif
