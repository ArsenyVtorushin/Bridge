#include "Color.hpp"

// Color by default is black
Color::Color() :red_(0), green_(0), blue_(0) {}
Color::Color(int red, int green, int blue) :red_(red), green_(green), blue_(blue) {}



void Color::setColorCode(int red, int green, int blue)
{
	red_ = red;
	green_ = green;
	blue_ = blue;
}



auto Color::getHexCode() const -> std::string
{
	// later
	return std::string();
}



bool Color::operator==(const Color& other) const
{
	return 
		this->red_ == other.red_ && 
		this->green_ == other.green_ && 
		this->blue_ == other.blue_;
}

