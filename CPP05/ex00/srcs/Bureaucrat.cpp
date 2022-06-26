//
// Created by John Nappa on 01/04/2022.
//

#include "../incs/Bureaucrat.hpp"

Bureaucrat::GradeTooHighException::GradeTooHighException(std::string msg, int value) {
	this->msg = msg;
	this->value = value;
}

void Bureaucrat::GradeTooHighException::what() {
	std::cout<<msg<<" - "<<value<<std::endl;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() {

}

Bureaucrat::GradeTooLowException::GradeTooLowException(std::string msg, int value) {
	this->msg = msg;
	this->value = value;
}

void Bureaucrat::GradeTooLowException::what() {
	std::cout<<msg<<" - "<<value<<std::endl;
}

void Bureaucrat::lowGrade() {
	if (this->grade > 149)
		throw Bureaucrat::GradeTooLowException("Grade to low", this->grade);
	this->grade++;
}

void Bureaucrat::upGrade() {
	if (this->grade < 2)
		throw Bureaucrat::GradeTooLowException("Grade to high", this->grade);
	this->grade--;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() {

}



Bureaucrat::Bureaucrat() {}
Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &temp) {
	this->name = temp.name;
	this->grade = temp.grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &temp){
	this->name = temp.name;
	this->grade = temp.grade;
	return (*this);
}

Bureaucrat::Bureaucrat(std::string name, int grade) {
	this->name = name;
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException("Grade too High", grade);
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException("Grade too Low", grade);
	this->grade = grade;
}

std::string Bureaucrat::getName() const {
	return (this->name);
}

int Bureaucrat::getGrade() const{
	return (this->grade);
}

std::ostream &operator<<(std::ostream & ostr, Bureaucrat const &temp)
{
	ostr<<temp.getName() << ", Bureaucrat grade " << temp.getGrade();
	return ostr;
}
