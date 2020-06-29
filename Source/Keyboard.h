/**********************************************************************
 * \file   Keyboard.h
 * \brief  Keyboardクラスの宣言
 * \author かいちょー
 * \date   2020/6/30
 * \note   参考サイト⇒https://dixq.net/rp2/
 * \par    History
 *         2020/6/30
 *         ◆ファイルの作成
 *********************************************************************/

#include "Singleton.h"
#include <array>

 /**********************************************************************
  * \class   Keyboard
  * \brief   キーボードを扱うクラス
  *********************************************************************/
class Keyboard final:public Singleton<Keyboard>{
private:
    static const int KEY_NUM = 256;             //キー総数
    std::array<int, KEY_NUM> pressingCount;     //押されカウンタ
    std::array<int, KEY_NUM> releasingCount;    //離されカウンタ

    Keyboard() = default;
    friend Singleton<Keyboard>;

    bool IsAvailableCode(int keyCode);
public:
    bool Update();
    int GetPressingCount(int keyCode);
    int GetReleasingCount(int keyCode);
};