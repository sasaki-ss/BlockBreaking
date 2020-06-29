/**********************************************************************
 * \file   Singleton.h
 * \brief  Singleton�N���X�̐錾
 * \author ��������[
 * \date   2020/6/29
 * \note   �Q�l�T�C�g�� https://qiita.com/narumi_/items/b205e59e7fc81695f380
 * \par    History
 *         2020/6/29
 *         ���t�@�C���̍쐬
 *********************************************************************/

#ifndef DESIGNPATTERN_SINGLETON_H
#define DESIGNPATTERN_SINGLETON_H

 /**********************************************************************
  * \class   Singleton
  * \brief   �C���X�^���X������������Ȃ��悤�ɂ���
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