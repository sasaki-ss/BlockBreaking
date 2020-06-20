#ifndef OBJ_GAME_H
#define OBJ_GAME_H

#include "BaseScene.h"

/*
*	ゲームクラス
*	ゲームシーン
*/
class Game :BaseScene {
public:
	Game(SceneChanger* changer);	//Gameのコンストラクタ
	void Init();					//初期化処理
	void Final();					//終了処理
	void Update();					//更新処理
	void Draw();					//描画処理
};

#endif // !OBJ_GAME_H