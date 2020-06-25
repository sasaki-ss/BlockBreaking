#ifndef ADMIN_PLAYERMANAGER_H
#define ADMIN_PLAYERMANAGER_H

#include "Task.h"
#include "Player.h"

/*
*	�v���C���[�}�l�[�W���[
*	�v���C���[�̊Ǘ�
*/
class PlayerManager :public Task {
private:
	Player* player;
public:
	PlayerManager();
	~PlayerManager();
	void Init();
	void Final();
	void Update();
	void Draw();
	Object* GetPlayer() { return (Object*)player; }
};

#endif // !ADMIN_PLAYERMANAGER_H