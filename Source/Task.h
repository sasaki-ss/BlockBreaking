#ifndef SYSTEM_TASK_H
#define SYSTEM_TASK_H

/*
*	�^�X�N�N���X
*	���ׂẴI�u�W�F�N�g�Ɏ���������
*/
class Task {
public:
	virtual ~Task(){}
	virtual void Init(){}	//����������
	virtual void Final(){}	//�I������
	virtual void Update(){}	//�X�V����
	virtual void Draw(){}	//�`�揈��
};

#endif // !SYSTEM_TASK_H