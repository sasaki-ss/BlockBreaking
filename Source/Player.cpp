#include "Player.h"
#include "DxLib.h"

//�R���X�g���N�^
Player::Player(float _x, float _y, float _width, float _height) {
	x = _x;
	y = _y;
	width = _width;
	height = _height;
}

//����������
void Player::Init() {

}

//�I������
void Player::Final() {

}

//�X�V����
void Player::Update() {

}

//�`�揈��
void Player::Draw() {
	DrawBoxAA(x, y, x + width, y + height, GetColor(255, 255, 255), TRUE);
}

//�����������̏���
void Player::HitAction() {

}