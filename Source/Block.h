#ifndef OBJ_BLOCK_H
#define OBJ_BLOCK_H

#include "Object.h"

/*
 *  ブロッククラス
 *  消す存在
 */
class Block :public Object {
private:
    unsigned int color; //色
public:
    Block(float _x, float _y, float _width, float _height, unsigned int _color);    //コンストラクタ
    void Init();        //初期化処理
    void Final();       //終了処理
    void Update();      //更新処理
    void Draw();        //描画処理
    void HitAction();   //当たったときの処理
};

#endif // !OBJ_BLOCK_H