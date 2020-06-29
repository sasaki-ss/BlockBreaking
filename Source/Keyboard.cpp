/**********************************************************************
 * \file   Keyboard.cpp
 * \brief  Keyboardクラスの処理
 * \author かいちょー
 * \date   2020/6/30
 * \note   参考サイト⇒https://dixq.net/rp2/
 * \par    History
 *         2020/6/30
 *         ◆ファイルの作成
 *********************************************************************/

#include "Keyboard.h"
#include "DxLib.h"

/**********************************************************************
 * \fn      Update()
 * \brief   キーボードの更新
 * \param   なし
 * \return  true
 *********************************************************************/
bool Keyboard::Update(){

    char nowKeyStatus[KEY_NUM];
    GetHitKeyStateAll(nowKeyStatus);

    for(int i = 0; i < KEY_NUM; i++){
        //i番のキーが押されていたら
        if(nowKeyStatus[i] != 0){

            //離されカウンタが0より大きければ
            if(releasingCount[i] > 0){
                releasingCount[i] = 0;
            }

            //押されカウンタを増やす
            pressingCount[i]++;
        }
        else{
            //i番のキーが離されていたら
            if(pressingCount[i] >0){
                pressingCount[i] = 0;
            }

            //離されカウンタを増やす
            releasingCount[i]++;
        }
    }
    return true;
}

/**********************************************************************
 * \fn      GetPressingCount()
 * \brief   keyCodeのキーが押されているフレーム数を返す
 * \param   (int型 キーコード)
 * \return  -1 or 押されたフレーム数
 *********************************************************************/
int Keyboard::GetPressingCount(int keyCode){
    if(!IsAvailableCode(keyCode)){
        return -1;
    }
    return pressingCount[keyCode];
}

/**********************************************************************
 * \fn      GetReleasingCount()
 * \brief   keyCodeのキーが離されているフレーム数を返す
 * \param   (int型 キーコード)
 * \return  -1 or 離されたフレーム数
 *********************************************************************/
int Keyboard::GetReleasingCount(int keyCode){
    if(!IsAvailableCode(keyCode)){
        return -1;
    }
    return releasingCount[keyCode];
}

/**********************************************************************
 * \fn      IsAvailableCode()
 * \brief   keyCodeが有効な値かを返す
 * \param   (int型 キーコード)
 * \return  -1 or 離されたフレーム数
 *********************************************************************/
bool Keyboard::IsAvailableCode(int keyCode){
    if(!(0 <= keyCode && keyCode < KEY_NUM)){
        return false;
    }
    return true;
}