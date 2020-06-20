#include "DxLib.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpCmdLine, int nCmdShow) {

    //ウィンドウモード変更と初期化と裏画面設定
    ChangeWindowMode(TRUE), DxLib_Init(), SetDrawScreen(DX_SCREEN_BACK);

    //裏画面を表画面へ反映、メッセージ処理、画面クリア
    while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0) {

    }

    //DXライブラリ終了処理
    DxLib_End();
    return 0;
}