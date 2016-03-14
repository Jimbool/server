/*******************************************************************************
 File Name: Player.h
 Descript:
 
 Version: 1.0
 Created Time: 03/13/16 17:36:47
 Compiler: 
 Editor: vim
 Author: Jimbo
 mail: jimboo.lu@gmail.com
 
 Company: 
*******************************************************************************/

#ifndef PLAYER_H
#define PLAYER_H
#include "../object/Object.h"
#endif

class Player : public Object {
	public:
		Player();
		virtual ~Player();
		virtual Equals(Player *player);
		virtual Equals(Player &player);
		virtual Player Clone();
}
