/**********************************************************************
 * \file   Title.h
 * \brief  Title�N���X�̐錾
 * \author ��������[
 * \date   2020/6/20
 * \note   �Q�l�T�C�g��https://dixq.net/g/
 * \par    History
 *         2020/6/20
 *         ���t�@�C���̍쐬
 *********************************************************************/

#ifndef OBJ_TITLE_H
#define OBJ_TITLE_H

#include "BaseScene.h"

 /**********************************************************************
  * \enum    Title
  * \brief   �^�C�g���V�[��
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