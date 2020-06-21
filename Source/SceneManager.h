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
	BaseScene* scene;
	SceneState nextScene;

public:
	SceneManger();	//SceneManager�̃R���X�g���N�^
	void Init();	//����������
	void Final();	//�I������
	void Update();	//�X�V����
	void Draw();	//�`�揈��
	void ChangeScene(SceneState nextScene);
};

#endif // !ADMIN_SCENEMANAGER_H