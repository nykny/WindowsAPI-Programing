#include "nyStardewValley.h"
#include "nyTime.h"
#include "nySceneManager.h"
#include "nyInput.h"
#include "nyResources.h"


namespace ny
{
	StardewValley::StardewValley()
	{
	}
	StardewValley::~StardewValley()
	{
	}
	void StardewValley::Initialize()
	{
		mImage = Resources::Load<Image>(L"StardewValley", L"..\\Resources\\player.bmp");

		GameObject::Initialize();
	}
	void StardewValley::Update()
	{
		GameObject::Update();
		if (Input::GetKeyState(eKeyCode::A) == eKeyState::Pressed)
		{
			mPos.x -= 100.0f * Time::DeltaTime();
		}

		if (Input::GetKeyState(eKeyCode::D) == eKeyState::Pressed)
		{
			mPos.x += 100.0f * Time::DeltaTime();
		}

		//if (Input::GetKeyState(eKeyCode::D) == eKeyState::Up)
		//{
		//	mPos.x = 0.0f;
		//	mPos.y = 0.0f;
		//}

		if (Input::GetKeyState(eKeyCode::W) == eKeyState::Pressed)
		{
			mPos.y -= 100.0f * Time::DeltaTime();
		}

		if (Input::GetKeyState(eKeyCode::S) == eKeyState::Pressed)
		{
			mPos.y += 100.0f * Time::DeltaTime();
		}
	}
	void StardewValley::Render(HDC hdc)
	{
		GameObject::Render(hdc);

		BitBlt(hdc, mPos.x, mPos.y, mImage->GetWidth(), mImage->GetHeight(), mImage->GetHdc(), 0, 0, SRCCOPY);
	}
	void StardewValley::Release()
	{
		GameObject::Release();

	}
}
