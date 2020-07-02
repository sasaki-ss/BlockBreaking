/**********************************************************************
 * \file   Player.h
 * \brief  Playerクラスの宣言
 * \author かいちょー
 * \date   2020/6/25
 * \note   参考サイト⇒
 * \par    History
 *         2020/6/25
 *         ◆ファイルの作成
 *********************************************************************/

#ifndef OBJ_PLAYER_H
#define OBJ_PLAYER_H

#include "Object.h"

 /**********************************************************************
  * \class   Player
  * \brief   プレイヤークラス
  *********************************************************************/
class Player :public Object {
private:
    float width;        //横幅
    float height;       //高さ
public:
	Player(float _x, float _y, float _width, float _height);
	void Init();
	void Final();
	void Update();
	void Draw();
	void HitAction();
};

#endif // !OBJ_PLAYER_H