#include "Color.h"
#include "DxLib.h"

//Color�N���X�̃R���X�g���N�^
Color::Color() {
	red		= GetColor(255, 0, 0);
	yellow	= GetColor(255, 255, 0);
	blue	= GetColor(0, 140, 255);
	orange	= GetColor(255, 150, 0);
	green	= GetColor(0, 255, 0);
}

//�F�̕ԋp����
unsigned int Color::GetMyColor(int colorNum) {
	//�Ԃ��F
	static unsigned int returnColor = 0;

	//�Ή������F��returnColor�Ɋi�[����
	switch (colorNum)
	{
	case RED:
		returnColor = red;
		break;
	case YELLOW:
		returnColor = yellow;
		break;
	case BLUE:
		returnColor = blue;
		break;
	case ORANGE:
		returnColor = orange;
		break;
	case GREEN:
		returnColor = green;
		break;
	}

	return returnColor;
}