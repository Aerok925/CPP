//
// Created by John Nappa on 01/04/2022.
//

#include "../incs/Form.hpp"


const char * Form::GradeTooHighException::what() const throw() {
	return ("grade too high!");
}

const char * Form::GradeTooLowException::what() const throw() {
	return ("grade too low!");
}

Form::Form(){

}

Form::Form(const std::string &name, const int gradeRequired, const int gradeExecute) {
	_name = name;
	if (gradeRequired > 150)
		throw Form::GradeTooHighException();
	if (gradeRequired < 1)
		throw Form::GradeTooLowException();
	if (gradeExecute > 150)
		throw Form::GradeTooHighException();
	if (gradeExecute < 1)
		throw Form::GradeTooLowException();
	this->isSigned = false;
	this->gradeRequired = gradeRequired;
	this->gradeExecute = gradeExecute;
}

std::string Form::getName() const {
	return (this->_name);
}

bool Form::getSigned() const {
	return (this->isSigned);
}

int Form::getExecute() const {
	return(this->gradeExecute);
}

int Form::getRequired() const {
	return(this->gradeRequired);
}

std::ostream &operator<<(std::ostream &out, const Form &temp)
{
	out<<"Form name: "<<temp.getName()<<std::endl
	<<"Signed: "<< temp.getSigned()<<std::endl
	<<"Grade Required: "<<temp.getRequired()<<std::endl
	<<"Grade Execute: "<<temp.getExecute();
	return (out);
}

void Form::signForm(Bureaucrat &temp) {
	if (this->isSigned){
		std::cout<<temp.getName()<<" couldn’t sign "<<this->_name<<" because she's already signed.";
		return ;
	}
	if (temp.getGrade() > this->gradeRequired){
		std::cout<<temp.getName()<<" couldn’t sign "<<this->_name<<" because too small a rank.";
		return ;
	}
	this->isSigned = true;
	std::cout<<temp.getName()<<" signed "<<this->_name<<std::endl;
}
