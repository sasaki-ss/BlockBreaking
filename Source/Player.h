#ifndef OBJ_PLAYER_H
#define OBJ_PLAYER_H

#include "Object.h"

class Player :public Object {
public:
	Player(float _x, float _y, float _width, float _height);	//コンストラクタ
	void Init();		//初期化処理
	void Final();		//終了処理
	void Update();		//更新処理
	void Draw();		//描画処理
	void HitAction();	//当たった時の処理
};


#endif // !OBJ_PLAYER_H