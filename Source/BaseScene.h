#ifndef OBJ_BASESCENE_H
#define OBJ_BASESCENE_H

#include "Task.h"
#include "SceneChanger.h"

/*
*	ベースシーンクラス
*	すべてのシーンに継承させる
*/

class BaseScene :public Task {
protected:
	SceneChanger* sceneChanger;
public:
	virtual ~BaseScene(){}
	virtual void Init(){}
	virtual void Final(){}
	virtual void Update(){}
	virtual void Draw(){}
};

#endif // !OBJ_BASESCENE_H