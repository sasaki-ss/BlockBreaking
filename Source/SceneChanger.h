/**********************************************************************
 * \file   SceneChanger.h
 * \brief  SceneChangerクラスの宣言
 * \author かいちょー
 * \date   2020/6/20
 * \note   参考サイト⇒https://dixq.net/g/
 * \par    History
 *         2020/6/20
 *         ◆ファイルの作成
 *********************************************************************/

#ifndef INTERFASE_SCENECHANGER_H
#define INTERFASE_SCENECHANGER_H

#include "SceneState.h"

 /**********************************************************************
  * \class   SceneChanger
  * \brief   シーンを切り替えるインターフェイスクラス
  *********************************************************************/
class SceneChanger {
public:
	virtual ~SceneChanger(){}
	virtual void ChangeScene(SceneState _nextScene) = 0;
};

#endif // !INTERFASE_SCENECHANGER_H