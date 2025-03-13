#ifndef COLOR_HPP
#define COLOR_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Color
{
public:
	Color();
	Color(int red, int green, int blue);

	virtual ~Color() = default;

	void setColor(int red, int green, int blue);

	auto getHexCode()const->std::string;

	bool operator==(const Color& other)const;
	friend std::ostream& operator<<(std::ostream& out, const Color& obj);

private:
	int red_;
	int green_;
	int blue_;
};

#endif // !COLOR_HPP

