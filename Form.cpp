#include "Form.hpp"

Form::Form() :form_(Form::formType::Square) {}

Form::Form(int idForm) :form_(static_cast<Form::formType>(idForm)) {} // static_cast converts int to formType (in this case)

Form::Form(formType idForm) :form_(idForm) {}



auto Form::getName()const -> std::string 
{
	switch (form_)
	{
	case Form::formType::Square:
		return "Square";
	case Form::formType::Circle:
		return "Circle";
	case Form::formType::Star:
		return "Circle";
	case Form::formType::Parallelepiped:
		return "Circle";
	case Form::formType::Prizm:
		return "Circle";
	case Form::formType::Cone:
		return "Circle";
	case Form::formType::Romb:
		return "Circle";
	case Form::formType::Triangle:
		return "Triangle";
	case Form::formType::Hexagon:
		return "Hexagon";
	case Form::formType::Octagon:
		return "Octagon";
	default:
		return "";
	}
}



auto Form::getType() const -> formType
{
	return formType();
}



bool Form::operator==(const Form& other) const
{
	return this->form_ == other.form_;
}



std::ostream& operator<<(std::ostream& out, const Form& obj)
{
	return out << 
}
