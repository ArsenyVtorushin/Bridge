#include "Toy.hpp"

Toy::Toy()
{
	name_ = "Toy_" + std::to_string(rand() % 1000);
	color_ = { rand() % 256, rand() % 256, rand() % 256 };
	form_ = static_cast<Form::formType>(rand() % 9);
}

Toy::Toy(std::string name, Color color, Form::formType form)
	:name_(name),
	color_(color),
	form_(form) 
{}



void Toy::Info()
{
	std::cout
		<< "Name: " << name_
		<< "\nColor: " << color_
		<< "\nForm: " << form_
		<< std::endl;
}



void Toy::setRandom()
{
	name_ = "Toy_" + std::to_string(rand() % 1000);
	color_ = { rand() % 256, rand() % 256, rand() % 256 };
	form_ = static_cast<Form::formType>(rand() % 9);
}



void Toy::setName(const std::string& name)
{
	name_ = name;
}



void Toy::setColor(const Color& color)
{
	color_ = color;
}



void Toy::setForm(const Form::formType& form)
{
	form_ = form;
}



auto Toy::getName() const -> std::string
{
	return name_;
}



auto Toy::getColor() const -> Color
{
	return color_;
}



auto Toy::getForm() const -> Form::formType
{
	return form_.getType();
}



bool operator==(const Toy& a, const Toy& b)
{
	return false;
}



std::ostream& operator<<(std::ostream& out, Toy& obj)
{
	return out << obj.name_ << ' ' << obj.color_ << ' ' << obj.form_;
}
