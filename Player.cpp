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
    // hand_.~Hand();
    score_ = 0;

    opponent_ = nullptr;
    actiondeck_ = nullptr;
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
    hand_ = hand;
}

/**
 * @return the Player's current score
 */
int Player::getScore() const{
    return score_;

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

    // first check if card is playable
    if (card.isPlayable()){

        std::string instr = card.getInstruction();

        std::cout << "PLAYING ACTION CARD: " << instr << std::endl;

        // IF PLAY INSTRUCTION, PLAY POINTCARD(S)
        if (instr.substr(0,4) == "PLAY"){
            int num = std::stoi(instr.substr(5,1));
            for (int i=0; i<num; ++i){
                this->playPointCard();
            }
        }
        // ELSE IF DRAW INSTRUCTION, DRAW POINTCARD(S)
        else if (instr.substr(0,4) == "DRAW"){
            int num = std::stoi(instr.substr(5,1));
            for (int i = 0; i < num; ++i){
                this->drawPointCard();
            }
        }
        // ELSE IF REVERSE
        else if(instr.substr(0,7) == "REVERSE"){
            this->hand_.Reverse();
        }
        // ELSE IF SWAP
        else if(instr.substr(0,4) == "SWAP"){
            Hand temp = this->hand_;
            this->hand_ = opponent_->getHand();
            opponent_->setHand(temp);
        }
    }
    // if card isn't playable do nothing
}

/**
 * @post: Draw a point card and place it in the player's hand
 */
void Player::drawPointCard(){
    if (pointdeck_ && !pointdeck_->IsEmpty()){
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

void Player::setActionDeck(Deck<ActionCard>* actiondeck){
    actiondeck_ = std::move(actiondeck);
}


Deck<ActionCard>* Player::getActionDeck(){
    return this->actiondeck_;
}


void Player::setPointDeck(Deck<PointCard>* pointdeck){
    pointdeck_ = std::move(pointdeck);
}

Deck<PointCard>* Player::getPointDeck(){
    return this->pointdeck_;

}