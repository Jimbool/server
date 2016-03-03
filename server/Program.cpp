#include "Player.h"

int main(void)
{
	Player *p0 = new Player(new Attribute(1, "00"));
	Player *p1 = new Player(new Attribute(2, "11"));
	printf("%d\n",(int)p0);
	printf("%d\n",(int)p1);
	return 0;
}
