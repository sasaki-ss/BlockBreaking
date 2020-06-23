#ifndef OBJ_OBJECT_H
#define OBJ_OBJECT_H

#include "Task.h"

/*
*	オブジェクトクラス
*	すべてのゲームオブジェクトに継承させる
*/
class Object :public Task {
protected:
	float x;		//x座標
	float y;		//y座標
	float width;	//横幅
	float height;	//高さ
public:
	virtual void HitAction() = 0;	//当たった時の処理
	float GetPosX() { return x; }	//x座標を取得
	float GetPosY() { return y; }	//y座標を取得
};

#endif // !OBJ_OBJECT_H