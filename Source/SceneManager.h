#ifndef ADMIN_SCENEMANAGER_H
#define ADMIN_SCENEMANAGER_H

#include "Task.h"
#include "SceneChanger.h"
#include "BaseScene.h"

/*
*	シーンマネージャークラス
*	シーンの管理を行うクラス
*/
class SceneManger :public Task, SceneChanger {
private:
	BaseScene* scene;
	SceneState nextScene;

public:
	SceneManger();	//SceneManagerのコンストラクタ
	void Init();	//初期化処理
	void Final();	//終了処理
	void Update();	//更新処理
	void Draw();	//描画処理
	void ChangeScene(SceneState nextScene);
};

#endif // !ADMIN_SCENEMANAGER_H