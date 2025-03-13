#include "Game.hpp"




Game::Game()
{
	init();
}




void Game::StartGame()
{
	std::cout << "\n"
		<< "=========================================\n"
		<< "*  ����-����������� ��� �����, ��� ��!  *\n"
		<< "=========================================\n";

	while (true)
	{
		Show();
		char choose;

		do
		{
			std::cout << "\n\n"
				<< "------------------------\n"
				<< "|       ��������       |\n"
				<< "| 1.����� �������      |\n"
				<< "| 2.��������� �������  |\n"
				<< "| 0.��������� ����     |\n"
				<< "------------------------\n\n";
			std::cin >> choose;
		} while (choose < 48 || choose > 50);

		if (choose == '1')
		{
			TakeToys();
		}
		else if (choose == '2')
		{
			PlaceToys();
		}
		else
		{
			break;
		}
	}
}



void Game::TakeToys()
{
	hand_.push_back(bucket_.back());
	bucket_.pop_back();
}




void Game::PlaceToys()
{
	int choose;
	do
	{
		std::cout << "\n�������� � ����� ����� �������� �������:\n";
		std::cin >> choose;
	} while (choose < 0 || choose > 9);

	if (hand_.back().getForm() == static_cast<Form::formType>(choose))
	{
		bucket_.push_back(hand_.back());
		hand_.pop_back();
	}
	else
	{
		std::cout << "\n\n\n�������� ��� ��� ������\n";
	}
	
}



void Game::Show()
{
	std::cout << "\n*********************************";

	std::cout << "\n          - ������ -\n";
	for (int i = 0; i < bucket_.size(); i++)
	{
		std::cout << i << '\n';
		bucket_[i].Info();
	}

	std::cout << "\n           - ����� - \n";
	for (int i = 0; i < frames_.size(); i++)
	{
		std::cout << i << ' ' << frames_[i] << '\n';
	}

	std::cout << "\n\n           - � ��� � ���� - \n";
	for (int i = 0; i < hand_.size(); i++)
	{
		std::cout << i << std::endl;
		hand_[i].Info();
		std::cout << "\n";
	}

	std::cout << "*********************************\n";
}




void Game::init()
{
	frames_.reserve(9);
	for (int i = 0; i < frames_.capacity(); i++)
	{
		frames_.emplace_back(i);
	}

	bucket_.reserve(5);
	for (int i = 0; i < bucket_.capacity(); i++)
	{
		bucket_.emplace_back();
	}
}