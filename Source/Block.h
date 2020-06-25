#ifndef OBJ_BLOCK_H
#define OBJ_BLOCK_H

#include "Object.h"

/*
 *  �u���b�N�N���X
 *  ��������
 */
class Block :public Object {
private:
    unsigned int color; //�F
public:
    Block(float _x, float _y, float _width, float _height, unsigned int _color);    //�R���X�g���N�^
    void Init();        //����������
    void Final();       //�I������
    void Update();      //�X�V����
    void Draw();        //�`�揈��
    void HitAction();   //���������Ƃ��̏���
};

#endif // !OBJ_BLOCK_H