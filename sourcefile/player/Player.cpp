#include "Player.h"

Player::Player()
{

}


Player::~Player()
{
	
}

bool Player::Equals(Player *player)
{
	if (this == player)
	{
		return true;
	}
	return false;
}

bool Player::Equals(Player &player)
{
	return false;
}
