#pragma once
#include "Core.h"

namespace Game_engine {
	class Game_engine_API Application{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	
	Application* CreateApplication();


}