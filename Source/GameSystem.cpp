/**********************************************************************
 * \file   GameSystem.cpp
 * \brief  GameSystem�N���X�̏���
 * \author ��������[
 * \date   2020/6/28
 * \note   �Q�l�T�C�g��https://dixq.net/rp2/
 * \par    History
 *         2020/6/28
 *         ���t�@�C���̍쐬
 *********************************************************************/

#include "GameSystem.h"
#include "DxLib.h"

/**********************************************************************
 * \fn      Init()
 * \brief   DX���C�u�����̐ݒ�
 * \param   �Ȃ�
 * \return  true or false
 *********************************************************************/
bool GameSystem::Init() const{
    SetAlwaysRunFlag(TRUE);                 //�E�B���h�E����A�N�e�B�u�ł����s
    SetOutApplicationLogValidFlag(FALSE);   //���O�o�͂��s��Ȃ�
    SetMainWindowText("BlockBreaking");     //�E�B���h�E�^�C�g���ɃQ�[������ݒ�
    ChangeWindowMode(TRUE);                 //�E�B���h�E���[�h�ɐݒ�
    SetGraphMode(800, 600, 32);             //�Q�[����ʂ̉𑜓x��ݒ�

    if(DxLib_Init()){
        return false;
    }

    SetDrawScreen(DX_SCREEN_BACK);          //����ʏ�����ݒ�

    return true;
}

/**********************************************************************
 * \fn      Final()
 * \brief   DX���C�u�����I��
 * \param   �Ȃ�
 * \return  �Ȃ�
 *********************************************************************/
void GameSystem::Final() const{
    DxLib_End();
}

/**********************************************************************
 * \fn      GameMain()
 * \brief   ���C������
 * \param   �Ȃ�
 * \return  �Ȃ�
 *********************************************************************/
void GameSystem::GameMain() const{
    while(!ScreenFlip() && !ProcessMessage() && !ClearDrawScreen()){
    }
}