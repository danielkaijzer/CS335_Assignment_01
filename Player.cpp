#include "Player.hpp"

Player::Player(){
    opponent_ = nullptr;
    score_ = 0;
}

/**
 * @post: Destroy the Player object
 */
Player::~Player(){
    hand_.~Hand();
    score_ = 0;

    delete opponent_;
    opponent_ = nullptr;

    actiondeck_->~Deck();
    delete[] actiondeck_;
    actiondeck_ = nullptr;

    pointdeck_->~Deck();
    delete[] pointdeck_;
    pointdeck_ = nullptr;
}

/**
 * @return the player's hand
 */
const Hand& Player::getHand() const{
    return hand_;

}
/**
 * @post: Set the player's hand
 * @param const reference to a hand object
 */
void Player::setHand(const Hand& hand){
    this->hand_ = hand;
}

/**
 * @return the Player's current score
 */
int Player::getScore() const{
    return this->score_;

}


void Player::setScore(const int& score){
    score_ = score;
}

/**
 * @post: Play a given action card
 * @param: an Actioncard object
 * Begin the function by reporting the instruction of the card:
 * PLAYING ACTION CARD: [instruction]
 */
void Player::play(ActionCard&& card){

    card.setDrawn(true);

    if (card.isPlayable()){
        std::cout << "PLAYING ACTION CARD: " << card.getInstruction() << std::endl;
    }

}

/**
 * @post: Draw a point card and place it in the player's hand
 */
void Player::drawPointCard(){
    hand_.addCard(pointdeck_->Draw());

}
/**
 * @post: Play a point card from the player's hand and update the player's score
 */
void Player::playPointCard(){
    score_ += hand_.PlayCard();
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


void Player::setActionDeck(Deck<ActionCard>* actiondeck){
    actiondeck_ = actiondeck;
}


Deck<ActionCard>* Player::getActionDeck(){
    return actiondeck_;
}


void Player::setPointDeck(Deck<PointCard>* pointdeck){
    pointdeck_ = pointdeck;
}

Deck<PointCard>* Player::getPointDeck(){
    return pointdeck_;

}