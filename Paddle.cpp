#include "framework.h"
#include "Paddle.h"

Paddle::Paddle(int _x, int _y)
{
	x = _x;
	y = _y;
}

void Paddle::Move(int _x)
{
	x = _x - width / 2;
}

void Paddle::Draw()
{

}