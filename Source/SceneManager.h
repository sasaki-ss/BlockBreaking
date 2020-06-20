#ifndef ADMIN_SCENEMANAGER_H
#define ADMIN_SCENEMANAGER_H

#include "Task.h"

/*
*	シーンマネージャークラス
*	シーンの管理を行うクラス
*/
class SceneManger :public Task {
public:
	SceneManger();	//SceneManagerのコンストラクタ
	void Init();	//初期化処理
	void Final();	//終了処理
	void Update();	//更新処理
	void Draw();	//描画処理
};

#endif // !ADMIN_SCENEMANAGER_H