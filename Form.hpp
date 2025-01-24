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
	Form(formType idForm);

	virtual ~Form() = default;

	auto getName()const->std::string;
	auto getType()const->formType;

	bool operator==(const Form& other)const;
	friend std::ostream& operator<<(std::ostream& out, const Form& obj);

private:
	formType form_;
};

#endif // !FORM_HPP

