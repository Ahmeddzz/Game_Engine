#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Game_engine::Application* Game_engine::CreateApplication();



int main(int argc, char** argv) {
	printf("Game Engine\n");
	auto app = Game_engine::CreateApplication();
	app->Run();
	delete app;

}


#endif