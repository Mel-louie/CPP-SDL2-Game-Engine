#pragma once	// ensure that .hpp load just once, non-standard but widely supported
				// a little bit faster than guards?

// singleton class
class Engine {

public:
	static Engine& getInstance();

	bool	init();
	bool	clean();
	void	quit();

	void	update(float deltaTime);
	void	render();
	void	events();

	bool	isRunning() { return (is_running); }

private:
	Engine(const Engine& cpy);
	Engine& operator=(const Engine& src);
	Engine();

	static	Engine* instance;
	bool	is_running;
};
