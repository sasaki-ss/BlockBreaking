/**********************************************************************
 * \file   SceneChanger.h
 * \brief  SceneChanger�N���X�̐錾
 * \author ��������[
 * \date   2020/6/20
 * \note   �Q�l�T�C�g��https://dixq.net/g/
 * \par    History
 *         2020/6/20
 *         ���t�@�C���̍쐬
 *********************************************************************/

#ifndef INTERFASE_SCENECHANGER_H
#define INTERFASE_SCENECHANGER_H

#include "SceneState.h"

 /**********************************************************************
  * \class   SceneChanger
  * \brief   �V�[����؂�ւ���C���^�[�t�F�C�X�N���X
  *********************************************************************/
class SceneChanger {
public:
	virtual ~SceneChanger(){}
	virtual void ChangeScene(SceneState _nextScene) = 0;
};

#endif // !INTERFASE_SCENECHANGER_H