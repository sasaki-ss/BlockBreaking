#ifndef OBJ_BALL_H
#define OBJ_BALL_H

#include "Object.h"

class Ball :public Object {
private:
	const int VERTEX_NUM = 100;	//円を形成する頂点の数
	
	float radius;		//半径
	float velocityX;	//x座標の移動する速度
	float velocityY;	//y座標の移動する速度
public:
	Ball(float _x, float _y, float _radius);		//コンストラクタ
	void Init(float _x, float _y, float _radius);	//初期化処理
	void Final();		//終了処理
	void Update();		//更新処理
	void Draw();		//描画処理
};

#endif // !OBJ_BALL_H