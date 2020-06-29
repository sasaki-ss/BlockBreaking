/**********************************************************************
 * \file   Keyboard.h
 * \brief  Keyboard�N���X�̐錾
 * \author ��������[
 * \date   2020/6/30
 * \note   �Q�l�T�C�g��https://dixq.net/rp2/
 * \par    History
 *         2020/6/30
 *         ���t�@�C���̍쐬
 *********************************************************************/

#include "Singleton.h"
#include <array>

 /**********************************************************************
  * \class   Keyboard
  * \brief   �L�[�{�[�h�������N���X
  *********************************************************************/
class Keyboard final:public Singleton<Keyboard>{
private:
    static const int KEY_NUM = 256;             //�L�[����
    std::array<int, KEY_NUM> pressingCount;     //������J�E���^
    std::array<int, KEY_NUM> releasingCount;    //������J�E���^

    Keyboard() = default;
    friend Singleton<Keyboard>;

    bool IsAvailableCode(int keyCode);
public:
    bool Update();
    int GetPressingCount(int keyCode);
    int GetReleasingCount(int keyCode);
};