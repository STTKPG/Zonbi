#include "DxLib.h"
#include "Scene/SceneManager.h"

// プログラムは WinMain から始まります
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
							
	ChangeWindowMode(true);
	if (DxLib_Init() == -1)		// ＤＸライブラリ初期化処理
	{
		return -1;			// エラーが起きたら直ちに終了
	}
	//SetUseLighting(FALSE);
	SetDrawScreen(DX_SCREEN_BACK);
	SetGraphMode(200, 200, 64);
	ChangeLightTypeDir(VGet(0, -1.0f, -1.0f));
	while (CheckHitKey(KEY_INPUT_RETURN) == 0 || ProcessMessage() == -1)
	{
		ScreenFlip();
		ClearDrawScreen();

		SceneManager::Instance()->SceneEntry();

		SceneBase::SceneKind Current = SceneManager::Instance()->SceneUpdate();

		SceneManager::Instance()->SceneDraw();

		SceneManager::Instance()->SceneDelete(Current);
	}

	DxLib_End();				// ＤＸライブラリ使用の終了処理

	return 0;				// ソフトの終了 
}