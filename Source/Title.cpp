#include "Title.h"
#include "DxLib.h"

//コンストラクタ
Title::Title(SceneChanger* changer) :BaseScene(changer) {

}

//初期化処理
void Title::Init() {

}

//終了処理
void Title::Final() {

}

//更新処理
void Title::Update() {
	if (CheckHitKey(KEY_INPUT_SPACE) != 0) {
		sceneChanger->ChangeScene(SceneState::Game);
	}
}

//描画処理
void Title::Draw() {
	DrawString(0, 0, "タイトルシーン", GetColor(255, 255, 255));
}