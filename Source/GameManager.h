/**********************************************************************
 * \file   GameManager.h
 * \brief  GameManager�N���X�̐錾
 * \author ��������[
 * \date   2020/6/24
 * \note   �Q�l�T�C�g��
 * \par    History
 *         2020/6/24
 *         ���t�@�C���̍쐬
 *********************************************************************/

#ifndef ADMIN_GAMEMANAGER_H
#define ADMIN_GAMEMANAGER_H

#include "Task.h"
#include "PlayerManager.h"

 /**********************************************************************
  * \class   GameManager
  * \brief   �Q�[���̐i�s�Ǘ�
  *********************************************************************/
class GameManager :public Task {
	PlayerManager playerManager;
public:
	GameManager();
	~GameManager();
	void Init();
	void Final();
	void Update();
};

#endif // !ADMIN_GAMEMANAGER_H