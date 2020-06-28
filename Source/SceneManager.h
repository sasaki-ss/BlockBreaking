/**********************************************************************
 * \file   SceneManager.h
 * \brief  SceneManager�N���X�̐錾
 * \author ��������[
 * \date   2020/6/20
 * \note   �Q�l�T�C�g��https://dixq.net/g/
 * \par    History
 *         2020/6/20
 *         ���t�@�C���̍쐬
 *********************************************************************/

#ifndef ADMIN_SCENEMANAGER_H
#define ADMIN_SCENEMANAGER_H

#include "Task.h"
#include "SceneChanger.h"
#include "BaseScene.h"

 /**********************************************************************
  * \class   SceneManager
  * \brief   �V�[���̊Ǘ�
  *********************************************************************/
class SceneManger :public Task, SceneChanger {
private:
	BaseScene* scene;		//���݂̃V�[��
	SceneState nextScene;	//���̃V�[�����
public:
	SceneManger();
    void Init();
	void Final();
	void Update();
	void Draw();
	void ChangeScene(SceneState _nextScene);
};

#endif // !ADMIN_SCENEMANAGER_H