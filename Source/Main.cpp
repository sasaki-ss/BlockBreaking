#include "DxLib.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpCmdLine, int nCmdShow) {

    //�E�B���h�E���[�h�ύX�Ə������Ɨ���ʐݒ�
    ChangeWindowMode(TRUE), DxLib_Init(), SetDrawScreen(DX_SCREEN_BACK);

    //����ʂ�\��ʂ֔��f�A���b�Z�[�W�����A��ʃN���A
    while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0) {

    }

    //DX���C�u�����I������
    DxLib_End();
    return 0;
}