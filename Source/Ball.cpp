#include "Ball.h"
#include "DxLib.h"

Ball::Ball(float _x, float _y, float _radius) {
	x = _x + (_radius * 5) / 2;
	y = _y - _radius;
	radius = _radius;
	velocityX = 5;
	velocityY = -5;
}

void Ball::Init(float _x, float _y, float _radius) {
	x = _x + (_radius * 5) / 2;
	y = _y - _radius;
	radius = _radius;
}

void Ball::Final() {

}

void Ball::Update() {

}

void Ball::Draw() {
	DrawCircleAA(x, y, radius, VERTEX_NUM, GetColor(255, 255, 255), TRUE);
}