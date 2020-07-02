/**********************************************************************
 * \file   PlayerManager.h
 * \brief  PlayerManagerクラスの宣言
 * \author かいちょー
 * \date   2020/6/25
 * \note   参考サイト⇒
 * \par    History
 *         2020/6/25
 *         ◆ファイルの作成
 *********************************************************************/

#ifndef ADMIN_PLAYERMANAGER_H
#define ADMIN_PLAYERMANAGER_H

#include "Task.h"
#include "Player.h"

 /**********************************************************************
  * \class   PlayerManager
  * \brief   プレイヤー管理を行う
  *********************************************************************/
class PlayerManager :public Task {
private:
	Player* player;     //プレイヤー
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