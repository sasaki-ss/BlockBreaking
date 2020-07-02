/**********************************************************************
 * \file   GameManager.h
 * \brief  GameManagerクラスの宣言
 * \author かいちょー
 * \date   2020/6/24
 * \note   参考サイト⇒
 * \par    History
 *         2020/6/24
 *         ◆ファイルの作成
 *********************************************************************/

#ifndef ADMIN_GAMEMANAGER_H
#define ADMIN_GAMEMANAGER_H

#include "Task.h"
#include "PlayerManager.h"

 /**********************************************************************
  * \class   GameManager
  * \brief   ゲームの進行管理
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