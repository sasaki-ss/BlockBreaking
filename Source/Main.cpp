/**********************************************************************
 * \file   Main.cpp
 * \brief  BlockBreaking
 * \author かいちょー
 * \date   2020/6/20
 * \note   参考サイト⇒https://dixq.net/rp2/
 * \par    History
 *         2020/6/20
 *         ◆ファイルの作成
 *         2020/6/28　かいちょー
 *         ◆再設計に伴う修正
 *********************************************************************/

#include "DxLib.h"
#include "GameSystem.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpCmdLine, int nCmdShow) {

    GameSystem gameSystem;

    if (gameSystem.Init()) {
        gameSystem.GameMain();
    }

    gameSystem.Final();

    return 0;
}