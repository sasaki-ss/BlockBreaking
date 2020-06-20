#ifndef SYSTEM_TASK_H
#define SYSTEM_TASK_H

/*
*	タスククラス
*	すべてのオブジェクトに実装させる
*/
class Task {
public:
	virtual ~Task(){}
	virtual void Init(){}	//初期化処理
	virtual void Final(){}	//終了処理
	virtual void Update(){}	//更新処理
	virtual void Draw(){}	//描画処理
};

#endif // !SYSTEM_TASK_H