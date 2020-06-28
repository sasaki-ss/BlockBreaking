/**********************************************************************
 * \file   SceneManager.h
 * \brief  SceneManagerクラスの宣言
 * \author かいちょー
 * \date   2020/6/20
 * \note   参考サイト⇒https://dixq.net/g/
 * \par    History
 *         2020/6/20
 *         ◆ファイルの作成
 *********************************************************************/

#ifndef ADMIN_SCENEMANAGER_H
#define ADMIN_SCENEMANAGER_H

#include "Task.h"
#include "SceneChanger.h"
#include "BaseScene.h"

 /**********************************************************************
  * \class   SceneManager
  * \brief   シーンの管理
  *********************************************************************/
class SceneManger :public Task, SceneChanger {
private:
	BaseScene* scene;		//現在のシーン
	SceneState nextScene;	//次のシーン情報
public:
	SceneManger();
    void Init();
	void Final();
	void Update();
	void Draw();
	void ChangeScene(SceneState _nextScene);
};

#endif // !ADMIN_SCENEMANAGER_H