#ifndef OBJ_OBJECT_H
#define OBJ_OBJECT_H

#include "Task.h"

/*
*	�I�u�W�F�N�g�N���X
*	���ׂẴQ�[���I�u�W�F�N�g�Ɍp��������
*/
class Object :public Task {
protected:
	float x;		//x���W
	float y;		//y���W
	float width;	//����
	float height;	//����
public:
	virtual void HitAction() = 0;	//�����������̏���
	float GetPosX() { return x; }	//x���W���擾
	float GetPosY() { return y; }	//y���W���擾
};

#endif // !OBJ_OBJECT_H