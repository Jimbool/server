#ifndef PLAYER_H
#define PLAYER_H
#include "../Object.h"
#endif
class Player :
	public Object
{
public:
	Player();
   	virtual ~Player();
	virtual bool Equals(Player *player);
	virtual bool Equals(Player &player);
};

