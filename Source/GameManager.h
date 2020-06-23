#ifndef ADMIN_GAMEMANAGER_H
#define ADMIN_GAMEMANAGER_H

#include "Task.h"
#include "SceneChanger.h"

/*
*	ゲームマネージャークラス
*	ゲームの進行管理を行うクラス
*/
class GameManager :public Task {
	SceneState nowScene;
public:
	GameManager();		//コンストラクタ
	~GameManager();		//デストラクタ
	void Init();		//初期化処理
	void Final();		//終了処理
	void Update();		//更新処理
	void Draw();		//描画処理
	void SetNowScene(SceneState _nowScene) { nowScene = _nowScene; }	//現在のシーンをセットする
};

#endif // !ADMIN_GAMEMANAGER_H