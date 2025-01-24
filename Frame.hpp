#ifndef FRAME_HPP
#define FRAME_HPP

#include <iostream>
#include <string>

#include "Form.hpp"
#include "Toy.hpp"

class Frame 
{
public:
	Frame();
	Frame(const Form& obj);

	virtual ~Frame() = default;

	void setForm(const Form& obj);
	auto getForm()const->const Form&;

	friend bool operator==(const Frame& a, const Frame& b);
	friend std::ostream& operator<<(std::ostream& out, const Frame& obj);

	virtual bool CanPass(const Toy& toy);

private:
	Form form_;
};

#endif // !FRAME_HPP
