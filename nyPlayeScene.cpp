#include "nyPlayeScene.h"
#include "nyStardewValley.h"

namespace ny
{
	PlayeScene::PlayeScene()
	{
	}

	PlayeScene::~PlayeScene()
	{
	}

	void PlayeScene::Initialize()
	{
		for (float i = 0; i < 2; i++)
		{
			StardewValley* stardewValley = new StardewValley();
			stardewValley->SetName(L"Player");
			AddGameObeject(stardewValley, eLayerType::Player);
		}

		Scene::Initialize();
	}

	void PlayeScene::Update()
	{
		Scene::Update();
	}

	void PlayeScene::Render(HDC hdc)
	{
		//Super::Tick();
		Scene::Render(hdc);
	}

	void PlayeScene::Release()
	{
		Scene::Release();
	}
}

