#include "DxLib.h"
#include "GameManager.h"
#include "SceneManager.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpCmdLine, int nCmdShow) {

    //ウィンドウモード変更と初期化と裏画面設定
    ChangeWindowMode(TRUE), DxLib_Init(), SetDrawScreen(DX_SCREEN_BACK);

    //シーンマネージャー
    SceneManger sceneManager;
    //ゲームマネージャー
    GameManager gameManager;

    //シーンマネージャーの初期化処理
    sceneManager.Init();
    //ゲームマネージャーの初期化処理
    gameManager.Init();

    //裏画面を表画面へ反映、メッセージ処理、画面クリア
    while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0) {

        //シーンマネージャーの更新処理
        sceneManager.Update();
        //ゲームマネージャーの更新処理
        gameManager.Update();

        //ゲームマネージャーに現在のシーン情報
        gameManager.SetNowScene(sceneManager.GetNowScene());

        //シーンマネージャーの描画処理
        sceneManager.Draw();
        //ゲームマネージャーの描画処理
        gameManager.Draw();
    }

    //シーンマネージャーの終了処理
    sceneManager.Final();
    //ゲームマネージャーの終了処理
    gameManager.Final();

    //DXライブラリ終了処理
    DxLib_End();
    return 0;
}