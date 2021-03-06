/**********************************************************************
 * \file   PlayerManager.h
 * \brief  PlayerManagerクラスの宣言
 * \author かいちょー
 * \date   2020/6/25
 * \note   参考サイト⇒
 * \par    History
 *         2020/6/25
 *         ◆ファイルの作成
 *********************************************************************/

#include "PlayerManager.h"

 /**********************************************************************
  * \fn      PlayerManager()
  * \brief   プレイヤーマネージャーのコンストラクタ
  * \param   なし
  * \return  なし
  *********************************************************************/
PlayerManager::PlayerManager() {
	player = new Player(250, 500, 100, 20);
}

/**********************************************************************
 * \fn      ~PlayerManager()
 * \brief   プレイヤーマネージャーのデストラクタ
 * \param   なし
 * \return  なし
 *********************************************************************/
PlayerManager::~PlayerManager() {
	delete player;
}

/**********************************************************************
 * \fn      Init()
 * \brief   プレイヤーマネージャーの初期化処理
 * \param   なし
 * \return  なし
 *********************************************************************/
void PlayerManager::Init() {

}

/**********************************************************************
 * \fn      Final()
 * \brief   プレイヤーマネージャーの終了処理
 * \param   なし
 * \return  なし
 *********************************************************************/
void PlayerManager::Final() {

}

/**********************************************************************
 * \fn      Update()
 * \brief   プレイヤーマネージャーの更新処理
 * \param   なし
 * \return  なし
 *********************************************************************/
void PlayerManager::Update() {
	player->Update();
}

/**********************************************************************
 * \fn      Draw()
 * \brief   プレイヤーマネージャーの描画処理
 * \param   なし
 * \return  なし
 *********************************************************************/
void PlayerManager::Draw() {
	player->Draw();
}