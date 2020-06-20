#ifndef INTERFASE_SCENECHANGER_H
#define INTERFASE_SCENECHANGER_H

//�V�[���̃X�e�[�^�X
enum class SceneState {
	Title,
	Game,
	Result
};

/*
*	�V�[���`�F���W�N���X
*	�V�[���ύX���s���C���^�[�t�F�C�X�N���X
*/
class SceneChanger {
public:
	virtual ~SceneChanger(){}
	virtual void ChangeScene(SceneState nextScene) = 0;
};

#endif // !INTERFASE_SCENECHANGER_H