#ifndef OBJ_PLAYER_H
#define OBJ_PLAYER_H

#include "Object.h"

class Player :public Object {
public:
	Player(float _x, float _y, float _width, float _height);	//�R���X�g���N�^
	void Init();		//����������
	void Final();		//�I������
	void Update();		//�X�V����
	void Draw();		//�`�揈��
	void HitAction();	//�����������̏���
};


#endif // !OBJ_PLAYER_H