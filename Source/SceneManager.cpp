/**********************************************************************
 * \file   SceneManager.cpp
 * \brief  SceneManager�N���X�̐錾
 * \author ��������[
 * \date   2020/6/20
 * \note   �Q�l�T�C�g��https://dixq.net/g/
 * \par    History
 *         2020/6/20
 *         ���t�@�C���̍쐬
 *********************************************************************/

#include "SceneManager.h"
#include "Title.h"
#include "Game.h"
#include "Result.h"

 /**********************************************************************
  * \fn      SceneManager()
  * \brief   SceneManager�̃R���X�g���N�^
  * \param   �Ȃ�
  * \return  �Ȃ�
  *********************************************************************/
SceneManger::SceneManger() {
	nextScene = SceneState::None;
	scene = (BaseScene*)new Title(this);
}

/**********************************************************************
 * \fn      Init()
 * \brief   �V�[���̊Ǘ��̏�����
 * \param   �Ȃ�
 * \return  �Ȃ�
 *********************************************************************/
void SceneManger::Init() {
	scene->Init();
}

/**********************************************************************
 * \fn      Final()
 * \brief   �V�[���̊Ǘ��̏I������
 * \param   �Ȃ�
 * \return  �Ȃ�
 *********************************************************************/
void SceneManger::Final() {
	scene->Final();
}

/**********************************************************************
 * \fn      Update()
 * \brief   �V�[���̊Ǘ��̍X�V����
 * \param   �Ȃ�
 * \return  �Ȃ�
 *********************************************************************/
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

/**********************************************************************
 * \fn      Draw()
 * \brief   �V�[���̊Ǘ��̕`�揈��
 * \param   �Ȃ�
 * \return  �Ȃ�
 *********************************************************************/
void SceneManger::Draw() {
	scene->Draw();
}

/**********************************************************************
 * \fn      ChangeScene()
 * \brief   �V�[���̊Ǘ��̍X�V����
 * \param   SceneState�^ _nextScene
 * \return  �Ȃ�
 *********************************************************************/
void SceneManger::ChangeScene(SceneState _nextScene) {
	nextScene = _nextScene;
}