#pragma once

class GameplayController;

class GameplayService
{
private:
	GameplayController* gameplay_controller;

	void createControllers();
	void destroy();

public:
	GameplayService();
	~GameplayService();

	void initialize();
	void update();
	void render();

	int getMinesCount();
	float getRemainingTime();

	GameplayController* getGameplayController();
};