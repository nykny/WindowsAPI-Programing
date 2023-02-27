#pragma once
#include "nyEntity.h"
#include "nyLayer.h"

namespace ny
{
	class Scene : public Entity
	{
	public:
		Scene();
		virtual ~Scene();

		virtual void Initialize();
		virtual void Update();
		virtual void Render(HDC hdc);
		virtual void Release();

		void AddGameObeject(GameObject* obj, eLayerType layer);

	private:
		std::vector<Layer> mLayers;
	};
}