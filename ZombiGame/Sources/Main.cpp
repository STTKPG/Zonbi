#include "DxLib.h"
#include "Scene/SceneManager.h"

// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	if (DxLib_Init() == -1)		// �c�w���C�u��������������
	{
		return -1;			// �G���[���N�����璼���ɏI��
	}


	while (CheckHitKeyAll() == 0 || ProcessMessage() == -1)
	{
		SceneManager::Instance()->SceneEntry();

		SceneBase::SceneKind Current = SceneManager::Instance()->SceneUpdate();

		SceneManager::Instance()->SceneDraw();

		SceneManager::Instance()->SceneDelete(Current);
	}

	DxLib_End();				// �c�w���C�u�����g�p�̏I������

	return 0;				// �\�t�g�̏I�� 
}