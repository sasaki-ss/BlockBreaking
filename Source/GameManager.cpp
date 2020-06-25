#include "GameManager.h"

//GameManagerのコンストラクタ
GameManager::GameManager() {
	nowScene = SceneState::None;
}

//GameManangerのデストラクタ
GameManager::~GameManager() {

}

//初期化処理
void GameManager::Init() {

}

//終了処理
void GameManager::Final() {

}

//更新処理
void GameManager::Update() {
	if (nowScene == SceneState::Game) {
		playerManager.Update();
	}
}

//描画処理
void GameManager::Draw() {
	if (nowScene == SceneState::Game) {
		playerManager.Draw();
	}
}