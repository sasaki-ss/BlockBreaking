/**********************************************************************
 * \file   GameLoop.cpp
 * \brief  GameLoop�N���X�̏���
 * \author ��������[
 * \date   2020/6/28
 * \note   �Q�l�T�C�g��https://dixq.net/rp2/
 * \par    History
 *         2020/6/28
 *         ���t�@�C���̍쐬
 *********************************************************************/

#include "GameLoop.h"
#include "Keyboard.h"
#include "DxLib.h"

 /**********************************************************************
  * \fn      GameLoop()
  * \brief   GameLoop�̃R���X�g���N�^
  * \param   �Ȃ�
  * \return  �Ȃ�
  *********************************************************************/
GameLoop::GameLoop(){
    sceneManager = new SceneManger();
    sceneManager->Init();
}

/**********************************************************************
 * \fn      Init()
 * \brief   GameLoop�̃f�X�g���N�^
 * \param   �Ȃ�
 * \return  �Ȃ�
 *********************************************************************/
GameLoop::~GameLoop(){
    sceneManager->Final();
    delete sceneManager;
}

/**********************************************************************
 * \fn      loop()
 * \brief   �Q�[���̌J��Ԃ�����
 * \param   �Ȃ�
 * \return  true or false
 *********************************************************************/
bool GameLoop::loop() const{

    Keyboard::GetInst()->Update();

    sceneManager->Update();
    sceneManager->Draw();

    if(Keyboard::GetInst()->GetPressingCount(KEY_INPUT_ESCAPE) != 0){
        return false;
    }

    return true;
}