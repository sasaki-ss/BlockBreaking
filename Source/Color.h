#ifndef SYSTEM_COLOR_H
#define SYSTEM_COLOR_H

static const int RED	= 0;
static const int YELLOW = 1;
static const int BLUE	= 2;
static const int ORANGE = 3;
static const int GREEN	= 4;

class Color {
private:
	unsigned int red;		//��
	unsigned int yellow;	//���F
	unsigned int blue;		//��
	unsigned int orange;	//�I�����W
	unsigned int green;		//��
public:
	Color();	//�R���X�g���N�^
	unsigned int GetMyColor(int colorNum);	//�F�̎擾

};

#endif // !SYSTEM_COLOR_H