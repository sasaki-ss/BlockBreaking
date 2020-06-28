/**********************************************************************
 * \file   GameLoop.h
 * \brief  GameLoop�N���X�̐錾
 * \author ��������[
 * \date   2020/6/28
 * \note   �Q�l�T�C�g��https://dixq.net/rp2/
 * \par    History
 *         2020/6/28
 *         ���t�@�C���̍쐬
 *********************************************************************/

#ifndef SYSYEM_GAMELOOP_H
#define SYSYEM_GAMELOOP_H

#include "SceneManager.h"

 /**********************************************************************
  * \class   GameLoop
  * \brief   �Q�[���̏������J��Ԃ��N���X
  *********************************************************************/
class GameLoop final{
private:
    SceneManger* sceneManager;  //�V�[���}�l�[�W���[
public:
    GameLoop();
    ~GameLoop();
    bool loop() const;
};


#endif // !SYSYEM_GAMELOOP_H
