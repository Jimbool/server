#include "Player.h"

int main(void)
{
	Player p1(new Attribute(2, "11"));
	Player p2(new Attribute(3,"33"));

	printf("%d\n",p1.Equals(p2));
	getchar();
	return 0;
}
