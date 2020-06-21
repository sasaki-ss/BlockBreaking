#ifndef OBJ_RESULT_H
#define OBJ_RESULT_H

#include "BaseScene.h"
/*
*	リザルトクラス
*	リザルトシーン
*/
class Result :public BaseScene {
public:
	Result(SceneChanger* changer);	//リザルトクラスのコンストラクタ
	void Init();					//初期化処理
	void Final();					//終了処理
	void Update();					//更新処理
	void Draw();					//描画処理
};

#endif // !OBJ_RESULT_H