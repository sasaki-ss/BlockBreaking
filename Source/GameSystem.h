/**********************************************************************
 * \file   GameSystem.h
 * \brief  GameSystemクラスの宣言
 * \author かいちょー
 * \date   2020/6/28
 * \note   参考サイト⇒https://dixq.net/rp2/
 * \par    History
 *         2020/6/28
 *         ◆ファイルの作成
 *********************************************************************/

#ifndef SYSTEM_GAMESYSTEM_H
#define SYSTEM_GAMESYSTEM_H

/**********************************************************************
 * \class   GameSystem
 * \brief   DXライブラリの設定などを行う
 *********************************************************************/
class GameSystem final {
public:
	GameSystem() = default;
	~GameSystem() = default;
	bool Init() const;
	void Final() const;
	void GameMain() const;
};

#endif // !SYSTEM_GAMESYSTEM_H