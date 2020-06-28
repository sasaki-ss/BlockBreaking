/**********************************************************************
 * \file   GameLoop.h
 * \brief  GameLoopクラスの宣言
 * \author かいちょー
 * \date   2020/6/28
 * \note   参考サイト⇒https://dixq.net/rp2/
 * \par    History
 *         2020/6/28
 *         ◆ファイルの作成
 *********************************************************************/

#ifndef SYSYEM_GAMELOOP_H
#define SYSYEM_GAMELOOP_H

#include "SceneManager.h"

 /**********************************************************************
  * \class   GameLoop
  * \brief   ゲームの処理を繰り返すクラス
  *********************************************************************/
class GameLoop final{
private:
    SceneManger* sceneManager;  //シーンマネージャー
public:
    GameLoop();
    ~GameLoop();
    bool loop() const;
};


#endif // !SYSYEM_GAMELOOP_H
