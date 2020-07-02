/**********************************************************************
 * \file   Game.h
 * \brief  ゲームシーン
 * \author かいちょー
 * \date   2020/6/20
 * \note   参考サイト⇒https://dixq.net/g/
 * \par    History
 *         2020/6/20
 *         ◆ファイルの作成
 *********************************************************************/

#ifndef OBJ_GAME_H
#define OBJ_GAME_H

#include "BaseScene.h"
#include "GameManager.h"

 /**********************************************************************
  * \class    Game
  * \brief   ゲームシーン
  *********************************************************************/
class Game :BaseScene {
private:
    GameManager* gManager;      //ゲームマネージャークラス
public:
	Game(SceneChanger* changer);
	void Init();
	void Final();
	void Update();
	void Draw();
};

#endif // !OBJ_GAME_H