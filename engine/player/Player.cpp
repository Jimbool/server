/*******************************************************************************
 File Name: Player.cpp
 Descript:
 
 Version: 1.0
 Created Time: 03/13/16 17:43:34
 Compiler: 
 Editor: vim
 Author: Jimbo
 mail: jimboo.lu@gmail.com
 
 Company: 
*******************************************************************************/

#ifndef PLAYER_CPP
#define PLAYER_CPP
#include "Player.h"
#endif

Player::Player() {
	
}

Player::~Player() { 
	
}

bool Player::Equals(Player *player) {
    if (this == player)
        return true;
    else
        return false;
}

bool Player::Equals(Player &playre) {
    return true;
} 

Player* Player::Clone() {
    Player *p = new Player();
    return p;
}
