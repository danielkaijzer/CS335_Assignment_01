#include "Player.hpp"

// Player::Player(){
//     opponent_ = nullptr;
//     score_ = 0;

//     actiondeck_ = new Deck<ActionCard>();
//     pointdeck_ = new Deck<PointCard>();
// }

Player::Player(): score_(0), opponent_(nullptr){

    actiondeck_ = new Deck<ActionCard>();
    pointdeck_ = new Deck<PointCard>();
}

/**
 * @post: Destroy the Player object
 */
Player::~Player(){

    delete actiondeck_;
    delete pointdeck_;
    // hand_.~Hand();
    // score_ = 0;

    // delete opponent_;
    // opponent_ = nullptr;

    // actiondeck_->~Deck();
    // delete[] actiondeck_;
    // actiondeck_ = nullptr;

    // pointdeck_->~Deck();
    // delete[] pointdeck_;
    // pointdeck_ = nullptr;
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

    // v1
    // if (card.isPlayable() == false){
    //     return;
    // }

    // std::string instr = card.getInstruction();
    // std::regex drawR("DRAW (\\d+) CAARD(\\(S\\))?");
    // std::regex playR("PLAY (\\d+) CARD(\\(S\\))?");
    // std::smatch m;

    // std::cout << "PLAYING ACTION CARD: " << instr;

    // // IF PLAY INSTRUCTION, PLAY POINTCARD(S)
    // if(std::regex_match(instr, m, playR)){
    //     int num = std::stoi(m[1].str());
    //     for (int i=0; i<num; i++){
    //         playPointCard();
    //     }
    // }

    // // ELSE IF DRAW INSTRUCTION, DRAW POINTCARD(S)
    // else if(std::regex_match(instr, m, drawR)){
    //     int num = std::stoi(m[1].str());
    //     for (int i = 0; i < num; i++){
    //         hand_.addCard(pointdeck_->Draw());
    //     }
    // }

    // else if(instr == "SWAP HAND WITH OPPONENT"){
    //     Hand playerHand = getHand();
    //     setHand(opponent_->getHand());
    //     opponent_->setHand(playerHand);
    // }

    // else if(instr == "REVERSE HAND"){
    //     hand_.Reverse();
    // }



    // v2
    if (card.isPlayable()){
        card.setDrawn(true);

        std::string instr = card.getInstruction();
        std::regex drawR("DRAW (\\d+) CAARD(\\(S\\))?");
        std::regex playR("DRAW (\\d+) CARD(\\(S\\))?");
        std::smatch m;

        std::cout << "PLAYING ACTION CARD: " << instr << std::endl;

        // IF PLAY INSTRUCTION, PLAY POINTCARD(S)
        if(std::regex_match(instr, m, playR)){
            int num = std::stoi(m[1].str());
            for (int i=0; i<num; ++i){
                playPointCard();
            }
        }
        // ELSE IF DRAW INSTRUCTION, DRAW POINTCARD(S)
        else if(std::regex_match(instr, m, drawR)){
            int num = std::stoi(m[1].str());
            for (int i = 0; i < num; ++i){
                hand_.addCard(pointdeck_->Draw());
            }
        }
        else if(instr == "SWAP HAND WITH OPPONENT"){
            Hand playerHand = getHand();
            setHand(opponent_->getHand());
            opponent_->setHand(playerHand);
        }
        else if(instr == "REVERSE HAND"){
            hand_.Reverse();
        }
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