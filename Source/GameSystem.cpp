/**********************************************************************
 * \file   GameSystem.cpp
 * \brief  GameSystemクラスの処理
 * \author かいちょー
 * \date   2020/6/28
 * \note   参考サイト⇒https://dixq.net/rp2/
 * \par    History
 *         2020/6/28
 *         ◆ファイルの作成
 *********************************************************************/

#include "GameSystem.h"
#include "DxLib.h"

/**********************************************************************
 * \fn      Init()
 * \brief   DXライブラリの設定
 * \param   なし
 * \return  true or false
 *********************************************************************/
bool GameSystem::Init() const{
    SetAlwaysRunFlag(TRUE);                 //ウィンドウが非アクティブでも実行
    SetOutApplicationLogValidFlag(FALSE);   //ログ出力を行わない
    SetMainWindowText("BlockBreaking");     //ウィンドウタイトルにゲーム名を設定
    ChangeWindowMode(TRUE);                 //ウィンドウモードに設定
    SetGraphMode(800, 600, 32);             //ゲーム画面の解像度を設定

    if(DxLib_Init()){
        return false;
    }

    SetDrawScreen(DX_SCREEN_BACK);          //裏画面処理を設定

    return true;
}

/**********************************************************************
 * \fn      Final()
 * \brief   DXライブラリ終了
 * \param   なし
 * \return  なし
 *********************************************************************/
void GameSystem::Final() const{
    DxLib_End();
}

/**********************************************************************
 * \fn      GameMain()
 * \brief   メイン処理
 * \param   なし
 * \return  なし
 *********************************************************************/
void GameSystem::GameMain() const{
    while(!ScreenFlip() && !ProcessMessage() && !ClearDrawScreen()){
    }
}