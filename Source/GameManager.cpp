#include "GameManager.h"

//GameManager�̃R���X�g���N�^
GameManager::GameManager() {
	nowScene = SceneState::None;
}

//GameMananger�̃f�X�g���N�^
GameManager::~GameManager() {

}

//����������
void GameManager::Init() {

}

//�I������
void GameManager::Final() {

}

//�X�V����
void GameManager::Update() {
	if (nowScene == SceneState::Game) {
		playerManager.Update();
	}
}

//�`�揈��
void GameManager::Draw() {
	if (nowScene == SceneState::Game) {
		playerManager.Draw();
	}
}