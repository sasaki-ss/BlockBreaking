/**********************************************************************
 * \file   Keyboard.cpp
 * \brief  Keyboard�N���X�̏���
 * \author ��������[
 * \date   2020/6/30
 * \note   �Q�l�T�C�g��https://dixq.net/rp2/
 * \par    History
 *         2020/6/30
 *         ���t�@�C���̍쐬
 *********************************************************************/

#include "Keyboard.h"
#include "DxLib.h"

/**********************************************************************
 * \fn      Update()
 * \brief   �L�[�{�[�h�̍X�V
 * \param   �Ȃ�
 * \return  true
 *********************************************************************/
bool Keyboard::Update(){

    char nowKeyStatus[KEY_NUM];
    GetHitKeyStateAll(nowKeyStatus);

    for(int i = 0; i < KEY_NUM; i++){
        //i�Ԃ̃L�[��������Ă�����
        if(nowKeyStatus[i] != 0){

            //������J�E���^��0���傫�����
            if(releasingCount[i] > 0){
                releasingCount[i] = 0;
            }

            //������J�E���^�𑝂₷
            pressingCount[i]++;
        }
        else{
            //i�Ԃ̃L�[��������Ă�����
            if(pressingCount[i] >0){
                pressingCount[i] = 0;
            }

            //������J�E���^�𑝂₷
            releasingCount[i]++;
        }
    }
    return true;
}

/**********************************************************************
 * \fn      GetPressingCount()
 * \brief   keyCode�̃L�[��������Ă���t���[������Ԃ�
 * \param   (int�^ �L�[�R�[�h)
 * \return  -1 or �����ꂽ�t���[����
 *********************************************************************/
int Keyboard::GetPressingCount(int keyCode){
    if(!IsAvailableCode(keyCode)){
        return -1;
    }
    return pressingCount[keyCode];
}

/**********************************************************************
 * \fn      GetReleasingCount()
 * \brief   keyCode�̃L�[��������Ă���t���[������Ԃ�
 * \param   (int�^ �L�[�R�[�h)
 * \return  -1 or �����ꂽ�t���[����
 *********************************************************************/
int Keyboard::GetReleasingCount(int keyCode){
    if(!IsAvailableCode(keyCode)){
        return -1;
    }
    return releasingCount[keyCode];
}

/**********************************************************************
 * \fn      IsAvailableCode()
 * \brief   keyCode���L���Ȓl����Ԃ�
 * \param   (int�^ �L�[�R�[�h)
 * \return  -1 or �����ꂽ�t���[����
 *********************************************************************/
bool Keyboard::IsAvailableCode(int keyCode){
    if(!(0 <= keyCode && keyCode < KEY_NUM)){
        return false;
    }
    return true;
}