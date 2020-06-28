/**********************************************************************
 * \file   GameLoop.cpp
 * \brief  GameLoopクラスの処理
 * \author かいちょー
 * \date   2020/6/28
 * \note   参考サイト⇒https://dixq.net/rp2/
 * \par    History
 *         2020/6/28
 *         ◆ファイルの作成
 *********************************************************************/

#include "GameLoop.h"

 /**********************************************************************
  * \fn      GameLoop()
  * \brief   GameLoopのコンストラクタ
  * \param   なし
  * \return  なし
  *********************************************************************/
GameLoop::GameLoop(){
    sceneManager = new SceneManger();
    sceneManager->Init();
}

/**********************************************************************
 * \fn      Init()
 * \brief   GameLoopのデストラクタ
 * \param   なし
 * \return  なし
 *********************************************************************/
GameLoop::~GameLoop(){
    sceneManager->Final();
    delete sceneManager;
}

/**********************************************************************
 * \fn      loop()
 * \brief   ゲームの繰り返す処理
 * \param   なし
 * \return  true or false
 *********************************************************************/
bool GameLoop::loop() const{

    sceneManager->Update();
    sceneManager->Draw();

    return true;
}