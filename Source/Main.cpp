/**********************************************************************
 * \file   Main.cpp
 * \brief  BlockBreaking
 * \author ��������[
 * \date   2020/6/20
 * \note   �Q�l�T�C�g��https://dixq.net/rp2/
 * \par    History
 *         2020/6/20
 *         ���t�@�C���̍쐬
 *         2020/6/28�@��������[
 *         ���Đ݌v�ɔ����C��
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