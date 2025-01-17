#ifndef FORM_HPP
#define FORM_HPP

#include "Color.hpp"
#include <string>

class Form
{
public:
	enum class formType
	{
		Square,
		Circle,
		Star, 
		Parallelepiped, 
		Prizm, 
		Cone,
		Romb,
		Triangle, 
		Hexagon,
		Octagon
	};
	
	Form();
	Form(int idForm);

	bool getName()const;

	bool operator==(const Form& other)const;

private:
	formType form_;
};

#endif // !FORM_HPP

