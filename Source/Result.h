/**********************************************************************
 * \file   Result.h
 * \brief  Resultのクラスの宣言
 * \author かいちょー
 * \date   2020/6/20
 * \note   参考サイト⇒https://dixq.net/g/
 * \par    History
 *         2020/6/20
 *         ◆ファイルの作成
 *********************************************************************/

#ifndef OBJ_RESULT_H
#define OBJ_RESULT_H

#include "BaseScene.h"

 /**********************************************************************
  * \class   Result
  * \brief   リザルトシーン
  *********************************************************************/
class Result :public BaseScene {
public:
	Result(SceneChanger* changer);
	void Init();
	void Final();
	void Update();
	void Draw();
};

#endif // !OBJ_RESULT_H