#include "Player.h"


Player::Player(Attribute *attribute)
{
	AttributePtr = attribute;
}


Player::~Player()
{
	delete(AttributePtr);
}

bool Player::Equals(Player *player)
{
	if (this == player)
	{
		return true;
	}
	return false;
}

bool Player::Equals(Player player)
{
	return false;
}
