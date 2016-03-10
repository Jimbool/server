#include "../Object.h"

class Player :
	public Object
{
public:
	Player();
	~Player();
	virtual bool Equals(Player *player);
	virtual bool Equals(Player &player);
};

