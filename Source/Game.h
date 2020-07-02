/**********************************************************************
 * \file   Game.h
 * \brief  �Q�[���V�[��
 * \author ��������[
 * \date   2020/6/20
 * \note   �Q�l�T�C�g��https://dixq.net/g/
 * \par    History
 *         2020/6/20
 *         ���t�@�C���̍쐬
 *********************************************************************/

#ifndef OBJ_GAME_H
#define OBJ_GAME_H

#include "BaseScene.h"
#include "GameManager.h"

 /**********************************************************************
  * \class    Game
  * \brief   �Q�[���V�[��
  *********************************************************************/
class Game :BaseScene {
private:
    GameManager* gManager;      //�Q�[���}�l�[�W���[�N���X
public:
	Game(SceneChanger* changer);
	void Init();
	void Final();
	void Update();
	void Draw();
};

#endif // !OBJ_GAME_H