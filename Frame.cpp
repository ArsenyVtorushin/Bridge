#include "Frame.hpp"

Frame::Frame() :Frame(Form::formType::Circle) {}

Frame::Frame(const Form& obj) :form_(obj) {} 



void Frame::setForm(const Form& obj)
{
	form_ = obj;
}



auto Frame::getForm() const -> const Form&
{
	return form_;
}



bool Frame::CanPass(const Toy& toy)
{
	return toy.getForm() == form_.getType();
}



bool operator==(const Frame& a, const Frame& b)
{
	return a.form_ == b.form_;
}



std::ostream& operator<<(std::ostream& out, const Frame& obj)
{
	return out << obj.form_ << " frame";
}
