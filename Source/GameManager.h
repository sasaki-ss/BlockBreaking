#ifndef ADMIN_GAMEMANAGER_H
#define ADMIN_GAMEMANAGER_H

#include "Task.h"
#include "SceneChanger.h"

/*
*	�Q�[���}�l�[�W���[�N���X
*	�Q�[���̐i�s�Ǘ����s���N���X
*/
class GameManager :public Task {
	SceneState nowScene;
public:
	GameManager();		//�R���X�g���N�^
	~GameManager();		//�f�X�g���N�^
	void Init();		//����������
	void Final();		//�I������
	void Update();		//�X�V����
	void Draw();		//�`�揈��
	void SetNowScene(SceneState _nowScene) { nowScene = _nowScene; }	//���݂̃V�[�����Z�b�g����
};

#endif // !ADMIN_GAMEMANAGER_H