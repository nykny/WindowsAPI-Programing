#pragma once
#include "nyGameObject.h"
#include "nyImage.h"

namespace ny
{
	class StardewValley : public GameObject
	{
	public:
		StardewValley();
		~StardewValley();

		virtual void Initialize() override;
		virtual void Update() override;
		virtual void Render(HDC hdc) override;
		virtual void Release() override;

	private:
		Image* mImage;
	};
}
