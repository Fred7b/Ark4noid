#pragma once
class Paddle
{
public:
	const static int width = 100;
	const static int height = 16;
	const static int hitbox = 5;

	int x, y;

	Paddle(int x, int y);
	void Move(int x);
	void Draw();
};
