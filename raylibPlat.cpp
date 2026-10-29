#include <iostream>
#include "Game.h"

int main()
{
	Game game;
	game.InitGame();


	while (!game.isPlaying())
	{
		game.Update();
		game.Draw();
	}
	CloseWindow();
}