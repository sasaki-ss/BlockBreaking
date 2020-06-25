#include "Color.h"
#include "DxLib.h"

//Colorクラスのコンストラクタ
Color::Color() {
	red		= GetColor(255, 0, 0);
	yellow	= GetColor(255, 255, 0);
	blue	= GetColor(0, 140, 255);
	orange	= GetColor(255, 150, 0);
	green	= GetColor(0, 255, 0);
}

//色の返却処理
unsigned int Color::GetMyColor(int colorNum) {
	//返す色
	static unsigned int returnColor = 0;

	//対応した色をreturnColorに格納する
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