#ifndef OBJ_BALL_H
#define OBJ_BALL_H

#include "Object.h"

class Ball :public Object {
private:
	const int VERTEX_NUM = 100;	//�~���`�����钸�_�̐�
	
	float radius;		//���a
	float velocityX;	//x���W�̈ړ����鑬�x
	float velocityY;	//y���W�̈ړ����鑬�x
public:
	Ball(float _x, float _y, float _radius);		//�R���X�g���N�^
	void Init(float _x, float _y, float _radius);	//����������
	void Final();		//�I������
	void Update();		//�X�V����
	void Draw();		//�`�揈��
};

#endif // !OBJ_BALL_H