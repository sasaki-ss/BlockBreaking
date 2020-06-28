/**********************************************************************
 * \file   SceneManager.cpp
 * \brief  SceneManagerクラスの宣言
 * \author かいちょー
 * \date   2020/6/20
 * \note   参考サイト⇒https://dixq.net/g/
 * \par    History
 *         2020/6/20
 *         ◆ファイルの作成
 *********************************************************************/

#include "SceneManager.h"
#include "Title.h"
#include "Game.h"
#include "Result.h"

 /**********************************************************************
  * \fn      SceneManager()
  * \brief   SceneManagerのコンストラクタ
  * \param   なし
  * \return  なし
  *********************************************************************/
SceneManger::SceneManger() {
	nextScene = SceneState::None;
	scene = (BaseScene*)new Title(this);
}

/**********************************************************************
 * \fn      Init()
 * \brief   シーンの管理の初期化
 * \param   なし
 * \return  なし
 *********************************************************************/
void SceneManger::Init() {
	scene->Init();
}

/**********************************************************************
 * \fn      Final()
 * \brief   シーンの管理の終了処理
 * \param   なし
 * \return  なし
 *********************************************************************/
void SceneManger::Final() {
	scene->Final();
}

/**********************************************************************
 * \fn      Update()
 * \brief   シーンの管理の更新処理
 * \param   なし
 * \return  なし
 *********************************************************************/
void SceneManger::Update() {
	//SceneStateがNone以外の時
	if (nextScene != SceneState::None) {
		//現在のシーンの終了処理を実行
		scene->Final();
		delete scene;

		//切り替えるシーンのインスタンスを生成する
		switch (nextScene) {
		case SceneState::Title:
			scene = (BaseScene*)new Title(this);
			break;
		case SceneState::Game:
			scene = (BaseScene*)new Game(this);
			break;
		case SceneState::Result:
			scene = (BaseScene*)new Result(this);
			break;
		}

		//次のシーン情報をNoneにする
		nextScene = SceneState::None;

		//次のシーンの初期化処理を行う
		scene->Init();
	}

	scene->Update();
}

/**********************************************************************
 * \fn      Draw()
 * \brief   シーンの管理の描画処理
 * \param   なし
 * \return  なし
 *********************************************************************/
void SceneManger::Draw() {
	scene->Draw();
}

/**********************************************************************
 * \fn      ChangeScene()
 * \brief   シーンの管理の更新処理
 * \param   SceneState型 _nextScene
 * \return  なし
 *********************************************************************/
void SceneManger::ChangeScene(SceneState _nextScene) {
	nextScene = _nextScene;
}