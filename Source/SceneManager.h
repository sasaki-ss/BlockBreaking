#ifndef ADMIN_SCENEMANAGER_H
#define ADMIN_SCENEMANAGER_H

#include "Task.h"

/*
*	�V�[���}�l�[�W���[�N���X
*	�V�[���̊Ǘ����s���N���X
*/
class SceneManger :public Task {
public:
	SceneManger();	//SceneManager�̃R���X�g���N�^
	void Init();	//����������
	void Final();	//�I������
	void Update();	//�X�V����
	void Draw();	//�`�揈��
};

#endif // !ADMIN_SCENEMANAGER_H