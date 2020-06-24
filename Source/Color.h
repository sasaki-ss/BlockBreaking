#ifndef SYSTEM_COLOR_H
#define SYSTEM_COLOR_H

static const int RED	= 0;
static const int YELLOW = 1;
static const int BLUE	= 2;
static const int ORANGE = 3;
static const int GREEN	= 4;

class Color {
private:
	unsigned int red;		//赤
	unsigned int yellow;	//黄色
	unsigned int blue;		//青
	unsigned int orange;	//オレンジ
	unsigned int green;		//緑
public:
	//コンストラクタ
	Color();
	//色の取得
	unsigned int GetMyColor(int colorNum);

};

#endif // !SYSTEM_COLOR_H