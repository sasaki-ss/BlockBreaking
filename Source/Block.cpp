#include "Block.h"
#include "DxLib.h"

//Block�N���X�̃R���X�g���N�^
Block::Block(float _x, float _y, float _width, float _height, unsigned int _color) {
	x = _x;
	y = _y;
	width = _width;
	height = _height;
	color = _color;
}

//����������
void Block::Init() {

}

//�I������
void Block::Final() {

}

//�X�V����
void Block::Update() {

}

//�`�揈��
void Block::Draw() {
	DrawBoxAA(x, y, x + width, y + height, color, TRUE);
	DrawBoxAA(x, y, x + width, y + height, color, GetColor(0, 0, 0), FALSE);
}

//�����������̏���
void Block::HitAction() {

}