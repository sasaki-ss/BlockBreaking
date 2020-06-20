#ifndef INTERFASE_SCENECHANGER_H
#define INTERFASE_SCENECHANGER_H

//シーンのステータス
enum class SceneState {
	Title,
	Game,
	Result
};

/*
*	シーンチェンジクラス
*	シーン変更を行うインターフェイスクラス
*/
class SceneChanger {
public:
	virtual ~SceneChanger(){}
	virtual void ChangeScene(SceneState nextScene) = 0;
};

#endif // !INTERFASE_SCENECHANGER_H