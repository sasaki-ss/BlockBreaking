#ifndef OBJ_BASESCENE_H
#define OBJ_BASESCENE_H

#include "Task.h"
#include "SceneChanger.h"

/*
*	�x�[�X�V�[���N���X
*	���ׂẴV�[���Ɍp��������
*/

class BaseScene :public Task {
protected:
	SceneChanger* sceneChanger;
public:
	BaseScene(SceneChanger* changer) { sceneChanger = changer; }
	virtual ~BaseScene(){}
	virtual void Init(){}
	virtual void Final(){}
	virtual void Update(){}
	virtual void Draw(){}
};

#endif // !OBJ_BASESCENE_H