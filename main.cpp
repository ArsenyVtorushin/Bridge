#include <iostream>
#include <Windows.h>
#include "Game.hpp"

// Мосты
// паттерн служит для объединения разных семейств наследования
// для совместной работы по общему свойству
// 


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Game game;
	game.StartGame();

	return 0;
}
