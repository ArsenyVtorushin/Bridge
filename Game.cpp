#include "Game.hpp"




Game::Game()
{
	frames_.reserve(9);
	for (size_t i = 0; i < frames_.size(); i++)
	{
		frames_[i].setForm(static_cast<Form::formType>(i));
	}

	bucket_.reserve(15);
	for (size_t i = 0; i < bucket_.size(); i++)
	{
		bucket_[i].setName("Abraham Linkoln");
		bucket_[i].setColor({ rand() % 256, rand() % 256, rand() % 256 });
		bucket_[i].setForm(static_cast<Form::formType>(rand() % 9)); // � ������ ������ ������ ���-�� ��������� >:(
	}

	hand_.reserve(3);
	for (size_t i = 0; i < hand_.size(); i++)
	{
		hand_[i].setName("George Washington");
		hand_[i].setColor({ rand() % 256, rand() % 256, rand() % 256 });
		hand_[i].setForm(static_cast<Form::formType>(rand() % 9));
	}
}




void Game::StartGame()
{
	std::cout
		<< "\n=========================================\n"
		<< "\n*  ����-����������� ��� �����, ��� ��!  *\n"
		<< "\n=========================================\n";

	while (true)
	{
		char choose;
		do
		{
			std::cout
				<< "\n------------------------\n"
				<< "|       ��������       |\n"
				<< "| 1.����� �������      |\n"
				<< "| 2.��������� �������  |\n"
				<< "| 3.���������� ������� |\n"
				<< "| 0.��������� ����     |\n"
				<< "------------------------\n";
			std::cin >> choose;
		} while (choose < 48 || choose > 51);

		if (choose == '1')
		{
			TakeToys();
		}
		else if (choose == '2')
		{
			PlaceToys();
		}
		else if (choose == '3')
		{
			ShowToys();
		}
	}
}



void Game::TakeToys()
{
}




void Game::PlaceToys()
{
}




void Game::ShowToys()
{
}


