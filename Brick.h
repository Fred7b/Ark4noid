#pragma once
class Brick
{
public:
	const static int width = 50;
	const static int height = 30;
	const static int hitbox = 5;

	int x, y, level;

	Brick(int x, int y, int level);
	bool isHit(int ballX, int ballY);
	COLORREF getColor();
};
