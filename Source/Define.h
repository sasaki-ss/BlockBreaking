/**********************************************************************
 * \file   Define.h
 * \brief  Defineクラスの宣言
 * \author かいちょー
 * \date   2020/6/28
 * \note   参考サイト⇒https://dixq.net/rp2/
 * \par    History
 *         2020/6/28
 *         ◆ファイルの作成
 *********************************************************************/

#ifndef DEFINE_DEFINE_H
#define DEFINE_DEFINE_H

 /**********************************************************************
  * \class   GameLoop
  * \brief   ゲームの処理を繰り返すクラス
  *********************************************************************/
class Define final{
private:
    const int WINDOW_WIDTH  = 800;  //ウィンドウサイズ横
    const int WINDOW_HEIGHT = 600;  //ウィンドウサイズ縦
    const int COLOR_BIT     = 32;   //色のbit数
public:
    int GetWindow_Width() const { return WINDOW_WIDTH; }
    int GetWindow_Height() const { return WINDOW_HEIGHT; }
    int GetColor_Bit() const { return COLOR_BIT; }
};

#endif // !DEFINE_DEFINE_H