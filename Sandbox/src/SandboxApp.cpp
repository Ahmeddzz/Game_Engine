#include <Game_engine.h>


class Sandbox : public Game_engine::Application {
public:
	Sandbox() {
	}

	~Sandbox() {
	}
};



Game_engine::Application* Game_engine::CreateApplication()
{

	return new Sandbox();

}