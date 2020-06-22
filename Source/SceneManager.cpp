#include "SceneManager.h"
#include "Title.h"
#include "Game.h"
#include "Result.h"

//SceneManagerクラスのコンストラクタ
SceneManger::SceneManger() {
	nextScene = SceneState::None;
	scene = (BaseScene*)new Title(this);
}

//初期化処理
void SceneManger::Init() {
	scene->Init();
}

//終了処理
void SceneManger::Final() {
	scene->Final();
}

//更新処理
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

//描画処理
void SceneManger::Draw() {
	scene->Draw();
}

//シーンを切り替える
void SceneManger::ChangeScene(SceneState _nextScene) {
	nextScene = _nextScene;
}