#ifndef ADMIN_GAMEMANAGER_H
#define ADMIN_GAMEMANAGER_H

#include "GameManager.h"

/*
*	�Q�[���}�l�[�W���[�N���X
	�Q�[���̐i�s�Ǘ����s���N���X
*/
class GameManager :public Task {
public:
	void GameManager();		//�R���X�g���N�^
	void ~GameManager();	//�f�X�g���N�^
	void Init();			//����������
	void Final();			//�I������
	void Update();			//�X�V����
	void Draw();			//�`�揈��
};

#endif // !ADMIN_GAMEMANAGER_H