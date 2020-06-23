#ifndef ADMIN_SCENEMANAGER_H
#define ADMIN_SCENEMANAGER_H

#include "Task.h"
#include "SceneChanger.h"
#include "BaseScene.h"

/*
*	�V�[���}�l�[�W���[�N���X
*	�V�[���̊Ǘ����s���N���X
*/
class SceneManger :public Task, SceneChanger {
private:
	BaseScene* scene;		//���݂̃V�[��
	SceneState nextScene;	//���̃V�[�����
	SceneState nowScene;	//���݂̃V�[�����

public:
	SceneManger();	//SceneManager�̃R���X�g���N�^
	void Init();	//����������
	void Final();	//�I������
	void Update();	//�X�V����
	void Draw();	//�`�揈��
	void ChangeScene(SceneState _nextScene);	//�V�[����؂�ւ���
	SceneState GetNowScene();					//���݂̃V�[�������擾����
};

#endif // !ADMIN_SCENEMANAGER_H