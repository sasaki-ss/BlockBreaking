/**********************************************************************
 * \file   PlayerManager.h
 * \brief  PlayerManager�N���X�̐錾
 * \author ��������[
 * \date   2020/6/25
 * \note   �Q�l�T�C�g��
 * \par    History
 *         2020/6/25
 *         ���t�@�C���̍쐬
 *********************************************************************/

#ifndef ADMIN_PLAYERMANAGER_H
#define ADMIN_PLAYERMANAGER_H

#include "Task.h"
#include "Player.h"

 /**********************************************************************
  * \class   PlayerManager
  * \brief   �v���C���[�Ǘ����s��
  *********************************************************************/
class PlayerManager :public Task {
private:
	Player* player;     //�v���C���[
public:
	PlayerManager();
	~PlayerManager();
	void Init();
	void Final();
	void Update();
	void Draw();
    Player* GetPlayer() { return player; }
};

#endif // !ADMIN_PLAYERMANAGER_H