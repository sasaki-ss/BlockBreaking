#include "SceneManager.h"
#include "Title.h"
#include "Game.h"
#include "Result.h"

//SceneManager�N���X�̃R���X�g���N�^
SceneManger::SceneManger() {
	nextScene = SceneState::None;
	scene = (BaseScene*)new Title(this);
}

//����������
void SceneManger::Init() {
	scene->Init();
}

//�I������
void SceneManger::Final() {
	scene->Final();
}

//�X�V����
void SceneManger::Update() {
	//SceneState��None�ȊO�̎�
	if (nextScene != SceneState::None) {
		//���݂̃V�[���̏I�����������s
		scene->Final();
		delete scene;

		//�؂�ւ���V�[���̃C���X�^���X�𐶐�����
		switch (nextScene) {
		case SceneState::Title:
			scene = (BaseScene*)new Title(this);
			break;
		case SceneState::Game:
			scene = (BaseScene*)new Game(this);
			break;
		case SceneState::Result:
			scene = (BaseScene*)new Result(this);
			break;
		}

		//���̃V�[������None�ɂ���
		nextScene = SceneState::None;

		//���̃V�[���̏������������s��
		scene->Init();
	}

	scene->Update();
}

//�`�揈��
void SceneManger::Draw() {
	scene->Draw();
}

//�V�[����؂�ւ���
void SceneManger::ChangeScene(SceneState _nextScene) {
	nextScene = _nextScene;
}