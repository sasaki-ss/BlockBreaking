#ifndef OBJ_RESULT_H
#define OBJ_RESULT_H

#include "BaseScene.h"
/*
*	���U���g�N���X
*	���U���g�V�[��
*/
class Result :public BaseScene {
public:
	Result(SceneChanger* changer);	//���U���g�N���X�̃R���X�g���N�^
	void Init();					//����������
	void Final();					//�I������
	void Update();					//�X�V����
	void Draw();					//�`�揈��
};

#endif // !OBJ_RESULT_H