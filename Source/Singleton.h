/**********************************************************************
 * \file   Singleton.h
 * \brief  Singletonクラスの宣言
 * \author かいちょー
 * \date   2020/6/29
 * \note   参考サイト⇒ https://qiita.com/narumi_/items/b205e59e7fc81695f380
 * \par    History
 *         2020/6/29
 *         ◆ファイルの作成
 *********************************************************************/

#ifndef DESIGNPATTERN_SINGLETON_H
#define DESIGNPATTERN_SINGLETON_H

 /**********************************************************************
  * \class   Singleton
  * \brief   インスタンスを一つしか持たないようにする
  *********************************************************************/
template<typename T>
class Singleton{
private:
    Singleton(const Singleton& obj) = default;
    Singleton& operator=(const Singleton& obj) = default;
protected:
    Singleton() = default;
    virtual ~Singleton() = default;
public:
    static T* GetInst(){
        static T inst;
        return &inst;
    }
};

#endif // !DESIGNPATTERN_SINGLETON_H