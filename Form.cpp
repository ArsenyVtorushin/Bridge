#include "Form.hpp"

Form::Form() :form_(Form::formType::Square) {}

Form::Form(int idForm) :form_(static_cast<Form::formType>(idForm)) {} // static_cast converts int to formType (in this case)



bool Form::getName() const
{
	return false;
}



bool Form::operator==(const Form& other) const
{
	return this->form_ == other.form_;
}
