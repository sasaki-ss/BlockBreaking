/**********************************************************************
 * \file   Object.h
 * \brief  Object�N���X�̐錾
 * \author ��������[
 * \date   2020/6/24
 * \note   �Q�l�T�C�g��
 * \par    History
 *         2020/6/24
 *         ���t�@�C���̍쐬
 *********************************************************************/

#ifndef OBJ_OBJECT_H
#define OBJ_OBJECT_H

#include "Task.h"

 /**********************************************************************
  * \class    Object
  * \brief   ���ׂẴI�u�W�F�N�g�Ɍp��
  *********************************************************************/
class Object :public Task {
protected:
	float x;		//x���W
	float y;		//y���W
public:
	virtual void Init(){}			//����������
	virtual void Final(){}			//�I������
	virtual void Update() = 0;		//�X�V����
	virtual void Draw() = 0;		//�`�揈��
	virtual void HitAction() = 0;	//�����������̏���
	float GetPosX() { return x; }	//x���W���擾
	float GetPosY() { return y; }	//y���W���擾
};

#endif // !OBJ_OBJECT_H