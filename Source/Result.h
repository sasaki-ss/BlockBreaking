/**********************************************************************
 * \file   Result.h
 * \brief  Result�̃N���X�̐錾
 * \author ��������[
 * \date   2020/6/20
 * \note   �Q�l�T�C�g��https://dixq.net/g/
 * \par    History
 *         2020/6/20
 *         ���t�@�C���̍쐬
 *********************************************************************/

#ifndef OBJ_RESULT_H
#define OBJ_RESULT_H

#include "BaseScene.h"

 /**********************************************************************
  * \class   Result
  * \brief   ���U���g�V�[��
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