/**********************************************************************
 * \file   Title.h
 * \brief  Titleクラスの宣言
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
template<class T>
class Singleton{
private:
    void operator=(const Singleton& obj) = default;
    Singleton(const Singleton& obj) = default;
protected:
    Singleton() = default;
    virtual ~Singleton() = default;
public:
    static T& GetInst(){
        static T instance;
        return instance;
    }
};


#endif // !DESIGNPATTERN_SINGLETON_H