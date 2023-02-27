#pragma once
#include "nyScene.h"

namespace ny
{
	class SceneManager
	{
	public:
		static void Initialize();
		static void Update();
		static void Render(HDC hdc);
		static void Release();

	private:
		static std::vector<Scene*> mScenes;
	};
}
