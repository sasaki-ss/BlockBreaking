/**********************************************************************
 * \file   GameSystem.h
 * \brief  GameSystem�N���X�̐錾
 * \author ��������[
 * \date   2020/6/28
 * \note   �Q�l�T�C�g��https://dixq.net/rp2/
 * \par    History
 *         2020/6/28
 *         ���t�@�C���̍쐬
 *********************************************************************/

#ifndef SYSTEM_GAMESYSTEM_H
#define SYSTEM_GAMESYSTEM_H

/**********************************************************************
 * \class   GameSystem
 * \brief   DX���C�u�����̐ݒ�Ȃǂ��s��
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