#include "DxLib.h"
#include "GameManager.h"
#include "SceneManager.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpCmdLine, int nCmdShow) {

    //��ʃT�C�Y
    SetGraphMode(800, 600, 32);

    //�^�C�g��
    SetMainWindowText("BlockBreaking ver0.5");

    //�E�B���h�E���[�h�ύX�Ə������Ɨ���ʐݒ�
    ChangeWindowMode(TRUE), DxLib_Init(), SetDrawScreen(DX_SCREEN_BACK);

    //�V�[���}�l�[�W���[
    SceneManger sceneManager;
    //�Q�[���}�l�[�W���[
    GameManager gameManager;

    //�V�[���}�l�[�W���[�̏���������
    sceneManager.Init();
    //�Q�[���}�l�[�W���[�̏���������
    gameManager.Init();

    //����ʂ�\��ʂ֔��f�A���b�Z�[�W�����A��ʃN���A
    while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0) {

        //�V�[���}�l�[�W���[�̍X�V����
        sceneManager.Update();

        //�Q�[���}�l�[�W���[�Ɍ��݂̃V�[�����
        gameManager.SetNowScene(sceneManager.GetNowScene());

        //�Q�[���}�l�[�W���[�̍X�V����
        gameManager.Update();

        //�V�[���}�l�[�W���[�̕`�揈��
        sceneManager.Draw();
        //�Q�[���}�l�[�W���[�̕`�揈��
        gameManager.Draw();
    }

    //�V�[���}�l�[�W���[�̏I������
    sceneManager.Final();
    //�Q�[���}�l�[�W���[�̏I������
    gameManager.Final();

    //DX���C�u�����I������
    DxLib_End();
    return 0;
}