#include <iostream>
#include <Windows.h>
#include "Game.hpp"

// �����
// ������� ������ ��� ����������� ������ �������� ������������
// ��� ���������� ������ �� ������ ��������
// 


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Game game;
	game.StartGame();

	return 0;
}
