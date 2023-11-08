/**
 * @file Player.cpp
 * @author Daniel Kaijzer
 * @brief Player implementation
 * @version 0.1
 * @date 2023-09-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "Player.hpp"

Player::Player(){
    score_ = 0;
    hand_ = Hand();
    opponent_ = nullptr;
    actiondeck_ = nullptr;
    pointdeck_ = nullptr;
}

/**
 * @post: Destroy the Player object
 */
Player::~Player(){
    score_ = 0;
    opponent_ = nullptr;
    actiondeck_ = nullptr;
    pointdeck_ = nullptr;
}

/**
 * @return the player's hand
 */
const Hand& Player::getHand() const
{
    return hand_;
}

/**
 * @post: Set the player's hand
 * @param const reference to a hand object
 */
void Player::setHand(const Hand& hand)
{
    hand_ = std::move(hand);
}

/**
 * @return the Player's current score
 */
int Player::getScore() const
{
    return score_;
}

/**
 * @post: Set the player's score
 * @param: score 
 */
void Player::setScore(const int& score)
{
    score_ = score;
}

/**
 * @post: Play a given action card
 * @param: an Actioncard object
 * Begin the function by reporting the instruction of the card:
 * PLAYING ACTION CARD: [instruction]
 */
void Player::play(ActionCard&& card)
{
    std::string instr = card.getInstruction();
    std::cout << "PLAYING ACTION CARD: " << instr << std::endl;

    // IF DRAW INSTRUCTION
    if (instr.substr(0,4) == "DRAW")
    {
        // GET NUMBER VALUE AND CONVERT TO INT (CAN BE BETWEEN 1 AND 99 INCLUSIVE)
        int num = std::stoi(instr.substr(instr.find(' ')+1, instr.find('C')-1));
        
        // DRAW NUM OF CARDS SPECIFIED IN INSTRUCTION
        for (int i = 0; i < num; ++i)
            drawPointCard();
    }
    // IF PLAY INSTRUCTION
    else if (instr.substr(0,4) == "PLAY")
    {
        // GET NUMBER VALUE AND CONVERT TO INT (CAN BE BETWEEN 1 AND 99 INCLUSIVE)
        int num = std::stoi(instr.substr(instr.find(' ')+1, instr.find('C')-1));
        // DRAW NUM OF CARDS SPECIFIED IN INSTRUCTION
        for (int i = 0; i < num; ++i)
            playPointCard();
    }
    // IF REVERSE INSTRUCTION
    else if (instr.substr(0,7) == "REVERSE")
    {
        hand_.Reverse();
    }
    // IF SWAP INSTRUCTION
    else if(instr.substr(0,4) == "SWAP")
    {
        Hand temp = this->hand_;
        hand_ = opponent_->getHand();
        opponent_->setHand(temp);
    }
}


/**
 * @post: Draw a point card and place it in the player's hand
 */
void Player::drawPointCard(){
    if (!pointdeck_->IsEmpty()){
        this->hand_.addCard(std::move(pointdeck_->Draw()));
    }
}

/**
 * @post: Play a point card from the player's hand and update the player's score
 */
void Player::playPointCard(){
    if (!hand_.isEmpty()){
        score_ += hand_.PlayCard();
    }
}

/**
 * @post: Set the opponent of the player
 * @param a pointer to a Player opponent 
 */
void Player::setOpponent(Player* opponent){
    opponent_ = opponent;
}
/**
 * @return: a pointer to the player's opponent
 */
Player* Player::getOpponent(){
    return opponent_;
}

/**
 * @post: set the action deck of the player 
 * @param: A pointer to a deck holding Action cards 
 */
void Player::setActionDeck(Deck<ActionCard>* actiondeck){
    actiondeck_ = std::move(actiondeck);
}

/**
 * @return a pointer to the player's action deck
 */
Deck<ActionCard>* Player::getActionDeck(){
    return this->actiondeck_;
}

/**
 * @post: set the point deck of the player
 * @param: A pointer to a deck holding Point cards
 */
void Player::setPointDeck(Deck<PointCard>* pointdeck){
    pointdeck_ = std::move(pointdeck);
}

/**
 * @return: a pointer to the player's point deck
 */
Deck<PointCard>* Player::getPointDeck(){
    return this->pointdeck_;
}

