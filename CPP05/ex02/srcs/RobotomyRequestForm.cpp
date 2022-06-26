//
// Created by John Nappa on 4/2/22.
//

#include "../incs/RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(std::string target) {
	this->target = target;
	this->_name = "RobotomyRequestForm";
	this->isSigned = false;
	this->gradeRequired = 72;
	this->gradeExecute = 45;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &temp) {
	this->target = temp.target;
	this->_name = temp._name;
	this->isSigned = temp.isSigned;
	this->gradeRequired = temp.gradeRequired;
	this->gradeExecute = temp.gradeExecute;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &temp) {
	this->target = temp.target;
	this->_name = temp._name;
	this->isSigned = temp.isSigned;
	this->gradeRequired = temp.gradeRequired;
	this->gradeExecute = temp.gradeExecute;
	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &temp) const {
	if (this->isSigned && temp.getGrade() <= this->gradeExecute)
	{
		if (std::rand() % 2)
			std::cout<<this->target<<" has been robotomized"<<std::endl;
		else
			std::cout<<this->target<<" the robotomy failed"<<std::endl;
	}
	if (!this->isSigned){
		std::cout<<"Form "<<this->_name<<" unsigned!"<<std::endl;
	}
	if (temp.getGrade() > this->gradeExecute)
		std::cout<<"A bureaucrat "<<temp.getName()<<" doesn't have enough grade."<<std::endl;
}