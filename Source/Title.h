#ifndef OBJ_TITLE_H
#define OBJ_TITLE_H

#include "BaseScene.h"

/*
*	タイトルクラス
*	タイトルシーン
*/

class Title :public BaseScene {
public:
	Title(SceneChanger* changer);	//Titleのコンストラクタ
	void Init();					//初期化処理
	void Final();					//終了処理
	void Update();					//更新処理
	void Draw();					//描画処理
};

#endif // !OBJ_TITLE_H
