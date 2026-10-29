#pragma once
#include <raylib.h>
class Game
{
private:
	bool playing = true;
	const int screenWidth = 800;
	const int screenHeigth = 600;
	Vector2 ballPos;
public:
	Game();
	~Game();

	void InitGame();
	void Update();
	void Draw();
	bool isPlaying() { return WindowShouldClose(); }
};

