#ifndef TOY_HPP
#define TOY_HPP

#include <iostream>
#include <string>

#include "Form.hpp"
#include "Color.hpp"

class Toy
{
public:
	Toy();
	Toy(std::string name, Color color, Form::formType form);

	virtual ~Toy() = default;


	// Почему мы в сеттеры передаем константную ссылку
	// а не обычный объект?


	void setName(const std::string& name);
	void setColor(const Color& color);
	void setForm(const Form::formType& form);

	auto getName()const->std::string;
	auto getColor()const->Color;
	auto getForm()const->Form::formType;

	friend bool operator==(const Toy& a, const Toy& b);
	friend std::ostream& operator<<(std::ostream& out, Toy& obj);

private:
	std::string name_;
	Color color_;
	Form form_;
};

#endif // !TOY_HPP

