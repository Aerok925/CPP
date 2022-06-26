//
// Created by John Nappa on 4/2/22.
//

#include "../incs/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) {
	this->target = target;
	this->_name = "PresidentialPardonForm";
	this->isSigned = false;
	this->gradeRequired = 25;
	this->gradeExecute = 5;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &temp) {
	this->target = temp.target;
	this->_name = temp._name;
	this->isSigned = temp.isSigned;
	this->gradeRequired = temp.gradeRequired;
	this->gradeExecute = temp.gradeExecute;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &temp) {
	this->target = temp.target;
	this->_name = temp._name;
	this->isSigned = temp.isSigned;
	this->gradeRequired = temp.gradeRequired;
	this->gradeExecute = temp.gradeExecute;
	return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &temp) const {
	if (this->isSigned && temp.getGrade() <= this->gradeExecute)
	{
		std::cout<<"Informs that "<<this->target<<" has been pardoned by Zaphod Beeblebrox."<<std::endl;
	}
	if (!this->isSigned){
		std::cout<<"Form "<<this->_name<<" unsigned!"<<std::endl;
	}
	if (temp.getGrade() > this->gradeExecute)
		std::cout<<"A bureaucrat "<<temp.getName()<<" doesn't have enough grade."<<std::endl;
}