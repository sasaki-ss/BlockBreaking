#ifndef OBJ_GAME_H
#define OBJ_GAME_H

#include "BaseScene.h"

/*
*	�Q�[���N���X
*	�Q�[���V�[��
*/
class Game :BaseScene {
public:
	Game(SceneChanger* changer);	//Game�̃R���X�g���N�^
	void Init();					//����������
	void Final();					//�I������
	void Update();					//�X�V����
	void Draw();					//�`�揈��
};

#endif // !OBJ_GAME_H