#include "Player.h"
#include "DxLib.h"

//コンストラクタ
Player::Player(float _x, float _y, float _width, float _height) {
	x = _x;
	y = _y;
	width = _width;
	height = _height;
}

//初期化処理
void Player::Init() {

}

//終了処理
void Player::Final() {

}

//更新処理
void Player::Update() {

}

//描画処理
void Player::Draw() {
	DrawBoxAA(x, y, x + width, y + height, GetColor(255, 255, 255), TRUE);
}

//当たった時の処理
void Player::HitAction() {

}