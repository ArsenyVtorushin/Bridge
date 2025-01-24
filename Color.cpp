#include "Color.hpp"

// Color by default is black
Color::Color() :red_(0), green_(0), blue_(0) {}
Color::Color(int red, int green, int blue) :red_(red), green_(green), blue_(blue) {}



void Color::setColor(int red, int green, int blue)
{
	red_ = red;
	green_ = green;
	blue_ = blue;
}



auto Color::getHexCode() const -> std::string
{
	std::string result{ "#" };
	result += std::to_string(red_);
	result += std::to_string(green_);
	result += std::to_string(blue_);
	return result;
}



bool Color::operator==(const Color& other) const
{
	return 
		this->red_ == other.red_ && 
		this->green_ == other.green_ && 
		this->blue_ == other.blue_;
}



std::ostream& operator<<(std::ostream& out, const Color& obj)
{
	return out << obj.getHexCode();
}
