//-----------------------------------
//1/14 竹下
//     UIControllerを作成
//
//-----------------------------------
#include "UIController.h"
#include "Input.h"
#include "SceneManager.h"

void UIController::Start()
{
}

void UIController::Update()
{
	//ENTERを押すとゲームシーンに移動
	if (IsKeyTrigger(VK_RETURN))
	{
		SceneManager::LoadScene(SceneName::SceneTitle);
	}
}
