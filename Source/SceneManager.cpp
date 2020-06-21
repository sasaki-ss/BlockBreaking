#include "SceneManager.h"

//SceneManagerクラスのコンストラクタ
SceneManger::SceneManger() {

}

//初期化処理
void SceneManger::Init() {

}

//終了処理
void SceneManger::Final() {

}

//更新処理
void SceneManger::Update() {

}

//描画処理
void SceneManger::Draw() {

}

//シーンを切り替える
void SceneManger::ChangeScene(SceneState _nextScene) {
	nextScene = _nextScene;
}