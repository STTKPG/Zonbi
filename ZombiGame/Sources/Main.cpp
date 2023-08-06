#include "DxLib.h"
#include "Scene/SceneManager.h"

// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
							
	ChangeWindowMode(true);
	if (DxLib_Init() == -1)		// �c�w���C�u��������������
	{
		return -1;			// �G���[���N�����璼���ɏI��
	}
	SetUseLighting(FALSE);
	SetDrawScreen(DX_SCREEN_BACK);
	SetGraphMode(200, 200, 64);
	while (CheckHitKey(KEY_INPUT_RETURN) == 0 || ProcessMessage() == -1)
	{
		DrawLine3D(VGet(0, 0, 0), VGet(1000, 0, 0), GetColor(255, 0, 0));
		ScreenFlip();
		ClearDrawScreen();

		SceneManager::Instance()->SceneEntry();

		SceneBase::SceneKind Current = SceneManager::Instance()->SceneUpdate();

		SceneManager::Instance()->SceneDraw();

		SceneManager::Instance()->SceneDelete(Current);
	}

	DxLib_End();				// �c�w���C�u�����g�p�̏I������

	return 0;				// �\�t�g�̏I�� 
}