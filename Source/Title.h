#ifndef OBJ_TITLE_H
#define OBJ_TITLE_H

#include "BaseScene.h"

/*
*	�^�C�g���N���X
*	�^�C�g���V�[��
*/

class Title :public Task {
public:
	Title();		//Title�̃R���X�g���N�^
	void Init();	//����������
	void Final();	//�I������
	void Update();	//�X�V����
	void Draw();	//�`�揈��
};

#endif // !OBJ_TITLE_H
