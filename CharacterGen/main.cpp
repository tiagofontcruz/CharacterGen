#include<iostream>

#include "Player.h"

void main()
{
	//create a player object
	Player aPlayer;

	//generate the player data:
	CreateCharacter(aPlayer);

	//print out the player sheet
	aPlayer.Print();

	system("pause");
}