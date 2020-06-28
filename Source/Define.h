/**********************************************************************
 * \file   Define.h
 * \brief  Define�N���X�̐錾
 * \author ��������[
 * \date   2020/6/28
 * \note   �Q�l�T�C�g��https://dixq.net/rp2/
 * \par    History
 *         2020/6/28
 *         ���t�@�C���̍쐬
 *********************************************************************/

#ifndef DEFINE_DEFINE_H
#define DEFINE_DEFINE_H

 /**********************************************************************
  * \class   GameLoop
  * \brief   �Q�[���̏������J��Ԃ��N���X
  *********************************************************************/
class Define final{
private:
    const int WINDOW_WIDTH  = 800;  //�E�B���h�E�T�C�Y��
    const int WINDOW_HEIGHT = 600;  //�E�B���h�E�T�C�Y�c
    const int COLOR_BIT     = 32;   //�F��bit��
public:
    int GetWindow_Width() const { return WINDOW_WIDTH; }
    int GetWindow_Height() const { return WINDOW_HEIGHT; }
    int GetColor_Bit() const { return COLOR_BIT; }
};

#endif // !DEFINE_DEFINE_H