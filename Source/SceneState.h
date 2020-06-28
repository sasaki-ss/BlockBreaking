/**********************************************************************
 * \file   SceneState.h
 * \brief  SceneState enumクラスの宣言
 * \author かいちょー
 * \date   2020/6/28
 * \note   参考サイト⇒https://dixq.net/g/
 * \par    History
 *         2020/6/28
 *         ◆ファイルの作成
 *********************************************************************/

#ifndef SCENE_SCENESTATE_H
#define SCENE_SCENESTATE_H

 /**********************************************************************
  * \enum    GameSystem
  * \brief   シーンのステータス
  *********************************************************************/
enum class SceneState {
    Title,
    Game,
    Result,
    None
};

#endif // !SCENE_SCENESTATE_H