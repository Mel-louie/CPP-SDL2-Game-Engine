#include "Engine.hpp"
#include <iostream>

Engine::Engine() {}

Engine& Engine::getInstance()
{
	static Engine engine;
	return engine; 
}

bool	Engine::init()
{
	is_running = true;
	 
}

bool	Engine::clean()
{}

void	Engine::quit()
{}

void	Engine::update(float deltaTime)
{
	std::cout << "updating" << std::endl;
}

void	Engine::render()
{}

void	Engine::events()
{}
