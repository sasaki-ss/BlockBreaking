#include "Title.h"
#include "DxLib.h"

//�R���X�g���N�^
Title::Title(SceneChanger* changer) :BaseScene(changer) {

}

//����������
void Title::Init() {

}

//�I������
void Title::Final() {

}

//�X�V����
void Title::Update() {
	if (CheckHitKey(KEY_INPUT_SPACE) != 0) {
		sceneChanger->ChangeScene(SceneState::Game);
	}
}

//�`�揈��
void Title::Draw() {
	DrawString(0, 0, "�^�C�g���V�[��", GetColor(255, 255, 255));
}