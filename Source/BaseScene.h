/**********************************************************************
 * \file   BaseScene.h
 * \brief  BaseSceneクラスの宣言
 * \author かいちょー
 * \date   2020/6/20
 * \note   参考サイト⇒https://dixq.net/g/
 * \par    History
 *         2020/6/20
 *         ◆ファイルの作成
 *********************************************************************/

#ifndef OBJ_BASESCENE_H
#define OBJ_BASESCENE_H

#include "Task.h"
#include "SceneChanger.h"

 /**********************************************************************
  * \class    BaseScene
  * \brief   すべてのシーンに継承
  *********************************************************************/
class BaseScene :public Task {
protected:
	SceneChanger* sceneChanger; //シーン切り替え
public:
	BaseScene(SceneChanger* changer) { sceneChanger = changer; }
	virtual ~BaseScene(){}
	virtual void Init(){}
	virtual void Final(){}
	virtual void Update(){}
	virtual void Draw(){}
};

#endif // !OBJ_BASESCENE_H