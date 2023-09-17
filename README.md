# CSCI335 Assignment 01

A program in C++ using OOP principles and efficient linear data structures as outlined in chapters 1 and 3 in the textbook.
Implements a simple card game.

## Rules of the Card Game:
- The game is for 2 players
- There are two types of cards: point cards and action cards. Point cards contain only a number. Action cards contain instructions such as "score 2 cards from your hand", "draw 4 cards", "swap your hand with opponent's hand", etc. A full list of types of instructions will be given for assignment 1, and there will likely be about 4-6 types.
- Your hand may only contain point cards, and must maintain an order so that cards drawn first are scored first.
- There are 2 decks: the action deck and the point deck. Players take turns playing cards from the top of the action deck. Cards from the point deck are drawn into your hand by action cards, and scored from your hand by action cards.
- Each deck must have a shuffle method.
- Note that there is no player input in this game. In assignment 1 you will read in each deck from a file, shuffle each deck with a specified random seed, then the game will play out on its own. I never said it was a good game.
- When a player reaches 50 points, the game ends and that player wins.

## Action Card Instructions:
- Draw x card(s).
- Play x card(s).
- Reverse hand.
- Swap hand with opponent.

## Program performs the following tasks:
1. Read the list of cards and some other information from an input file (.txt), sorting the cards into the "action deck" and "point deck" based on their type (may take multiple steps)
2. Shuffle the decks, if indicated in the input. We're currently testing random number generation for this - more instructions on shuffling will be given later.
3. Create the players and their hands, with each player starting at 0 points with an empty hand.
4. Have players take turns drawing and playing the top card of the action deck, then deleting it.
    1. Make sure the point cards drawn are put in players' hands.
    2. Make sure the point cards played from players' hands are scored then deleted.
5. Implement swapping hands with your opponent.
6. Implement reversing your hand efficiently.