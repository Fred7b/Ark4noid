#include "framework.h"
#include "Brick.h"

Brick::Brick(int _x, int _y, int _level)
{
	x = _x;
	y = _y;
	level = _level;
}

bool Brick::isHit(int ballX, int ballY)
{
	if (ballX >= x - hitbox && ballX < x + width + hitbox)
	{
		if (ballY >= y - hitbox && ballY < y + height + hitbox)
		{
			return TRUE;
		}
	}
	return FALSE;
}

COLORREF Brick::getColor()
{
	if (level == 0)
	{
		return RGB(0, 0, 255);
	}
	else if (level == 1)
	{
		return RGB(0, 0, 200);
	}
	return RGB(0, 0, 150);
}