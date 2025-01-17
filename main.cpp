#include <iostream>
#include "Color.hpp"

// Мосты
// паттерн служит для объединения разных семейств наследования
// для совместной работы по общему свойству
// 

//class Form;
//class Color;
//class Toy;
//class Frame;
//class Game;


int main()
{
	Color red(255, 0, 0);
	Color green(0, 255, 0);

	if (red == green)
		std::cout << "same color";
	else
		std::cout << "not same color";


	return 0;
}
