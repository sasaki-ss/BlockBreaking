#ifndef ADMIN_GAMEMANAGER_H
#define ADMIN_GAMEMANAGER_H

#include "GameManager.h"

/*
*	ゲームマネージャークラス
	ゲームの進行管理を行うクラス
*/
class GameManager :public Task {
public:
	void GameManager();		//コンストラクタ
	void ~GameManager();	//デストラクタ
	void Init();			//初期化処理
	void Final();			//終了処理
	void Update();			//更新処理
	void Draw();			//描画処理
};

#endif // !ADMIN_GAMEMANAGER_H