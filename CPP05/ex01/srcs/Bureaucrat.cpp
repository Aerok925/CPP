//
// Created by John Nappa on 01/04/2022.
//

#include "../incs/Bureaucrat.hpp"

const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return ("grade too low!");
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
	return ("grade too high!");
}

void Bureaucrat::lowGrade() {
	if (this->grade > 149)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

void Bureaucrat::upGrade() {
	if (this->grade < 2)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
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
		throw Bureaucrat::GradeTooHighException();
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
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
