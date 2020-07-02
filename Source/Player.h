/**********************************************************************
 * \file   Player.h
 * \brief  Player�N���X�̐錾
 * \author ��������[
 * \date   2020/6/25
 * \note   �Q�l�T�C�g��
 * \par    History
 *         2020/6/25
 *         ���t�@�C���̍쐬
 *********************************************************************/

#ifndef OBJ_PLAYER_H
#define OBJ_PLAYER_H

#include "Object.h"

 /**********************************************************************
  * \class   Player
  * \brief   �v���C���[�N���X
  *********************************************************************/
class Player :public Object {
private:
    float width;        //����
    float height;       //����
public:
	Player(float _x, float _y, float _width, float _height);
	void Init();
	void Final();
	void Update();
	void Draw();
	void HitAction();
};

#endif // !OBJ_PLAYER_H