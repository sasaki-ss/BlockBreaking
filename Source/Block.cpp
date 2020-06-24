#include "Block.h"
#include "DxLib.h"

//Blockクラスのコンストラクタ
Block::Block(float _x, float _y, float _width, float _height, unsigned int _color) {
	x = _x;
	y = _y;
	width = _width;
	height = _height;
	color = _color;
}

//初期化処理
void Block::Init() {

}

//終了処理
void Block::Final() {

}

//更新処理
void Block::Update() {

}

//描画処理
void Block::Draw() {
	DrawBoxAA(x, y, x + width, y + height, color, TRUE);
	DrawBoxAA(x, y, x + width, y + height, color, GetColor(0, 0, 0), FALSE);
}

//当たった時の処理
void Block::HitAction() {

}