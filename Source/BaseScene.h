/**********************************************************************
 * \file   BaseScene.h
 * \brief  BaseScene�N���X�̐錾
 * \author ��������[
 * \date   2020/6/20
 * \note   �Q�l�T�C�g��https://dixq.net/g/
 * \par    History
 *         2020/6/20
 *         ���t�@�C���̍쐬
 *********************************************************************/

#ifndef OBJ_BASESCENE_H
#define OBJ_BASESCENE_H

#include "Task.h"
#include "SceneChanger.h"

 /**********************************************************************
  * \class    BaseScene
  * \brief   ���ׂẴV�[���Ɍp��
  *********************************************************************/
class BaseScene :public Task {
protected:
	SceneChanger* sceneChanger; //�V�[���؂�ւ�
public:
	BaseScene(SceneChanger* changer) { sceneChanger = changer; }
	virtual ~BaseScene(){}
	virtual void Init(){}
	virtual void Final(){}
	virtual void Update(){}
	virtual void Draw(){}
};

#endif // !OBJ_BASESCENE_H