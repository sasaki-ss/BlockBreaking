/**********************************************************************
 * \file   Object.h
 * \brief  Objectクラスの宣言
 * \author かいちょー
 * \date   2020/6/24
 * \note   参考サイト⇒
 * \par    History
 *         2020/6/24
 *         ◆ファイルの作成
 *********************************************************************/

#ifndef OBJ_OBJECT_H
#define OBJ_OBJECT_H

#include "Task.h"

 /**********************************************************************
  * \class    Object
  * \brief   すべてのオブジェクトに継承
  *********************************************************************/
class Object :public Task {
protected:
	float x;		//x座標
	float y;		//y座標
public:
	virtual void Init(){}			//初期化処理
	virtual void Final(){}			//終了処理
	virtual void Update() = 0;		//更新処理
	virtual void Draw() = 0;		//描画処理
	virtual void HitAction() = 0;	//当たった時の処理
	float GetPosX() { return x; }	//x座標を取得
	float GetPosY() { return y; }	//y座標を取得
};

#endif // !OBJ_OBJECT_H