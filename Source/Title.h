/**********************************************************************
 * \file   Title.h
 * \brief  Titleクラスの宣言
 * \author かいちょー
 * \date   2020/6/20
 * \note   参考サイト⇒https://dixq.net/g/
 * \par    History
 *         2020/6/20
 *         ◆ファイルの作成
 *********************************************************************/

#ifndef OBJ_TITLE_H
#define OBJ_TITLE_H

#include "BaseScene.h"

 /**********************************************************************
  * \enum    Title
  * \brief   タイトルシーン
  *********************************************************************/
class Title :public BaseScene {
public:
	Title(SceneChanger* changer);
	void Init();
	void Final();
	void Update();
	void Draw();
};

#endif // !OBJ_TITLE_H