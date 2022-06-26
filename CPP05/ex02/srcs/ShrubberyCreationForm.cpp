//
// Created by John Nappa on 4/2/22.
//

#include "../incs/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) {
	this->target = target;
	this->_name = "ShrubberyForm";
	this->isSigned = false;
	this->gradeRequired = 145;
	this->gradeExecute = 137;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &temp) {
	this->target = temp.target;
	this->_name = temp._name;
	this->isSigned = temp.isSigned;
	this->gradeRequired = temp.gradeRequired;
	this->gradeExecute = temp.gradeExecute;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &temp) {
	this->target = temp.target;
	this->_name = temp._name;
	this->isSigned = temp.isSigned;
	this->gradeRequired = temp.gradeRequired;
	this->gradeExecute = temp.gradeExecute;
	return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &temp) const {
	if (this->isSigned && temp.getGrade() <= this->gradeExecute)
	{
		std::ofstream fout(this->target + "_shrubbery");
		fout<<
		"___________________________¶¶\n"
		"_________________________¶¶_¶¶¶\n"
		"_________________________¶___¶¶\n"
		"________________________¶¶____¶¶¶\n"
		"______________________¶¶________¶¶\n"
		"________________¶¶¶¶¶¶¶__¶¶______¶¶¶\n"
		"_______________¶¶______¶___¶___¶___¶¶\n"
		"______________¶¶______¶___¶___¶_____¶\n"
		"______________¶¶¶¶¶¶¶¶______¶_____¶¶¶\n"
		"______________¶¶¶____¶¶¶___¶¶¶___¶___¶\n"
		"____________¶¶¶______¶__¶¶¶___¶¶¶¶___¶¶¶\n"
		"__________¶¶¶_______¶______¶_____¶_____¶¶¶\n"
		"_________¶¶____¶¶_________¶_____¶______¶__¶¶\n"
		"__________¶¶__________¶_______________¶_____¶\n"
		"___________¶¶¶¶______¶___¶¶_¶¶____¶¶_____¶¶¶¶\n"
		"__________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_¶¶¶¶¶¶¶¶¶¶¶¶¶\n"
		"________¶¶¶____¶__¶¶________¶¶______¶___¶¶¶\n"
		"________¶¶____¶__________¶_________¶_______¶\n"
		"_________¶¶¶________¶___¶_____¶¶________¶___¶¶\n"
		"____________¶______¶_____¶__________¶__¶_____¶\n"
		"__________¶¶¶¶¶¶¶¶_______¶_¶¶¶¶____¶_____¶¶¶¶\n"
		"______¶¶¶¶_¶¶____¶¶¶¶¶¶¶¶¶¶¶__¶¶¶¶¶¶¶¶¶¶¶¶¶\n"
		"___¶¶¶¶________¶_____________¶_____________¶\n"
		"__¶___¶__¶____¶___¶¶_____¶__¶____¶¶___¶¶____¶¶\n"
		"__¶¶¶¶__¶___¶¶_____¶¶___¶____¶_____¶____¶____¶¶¶¶\n"
		"_____¶¶¶¶¶¶¶¶¶¶¶_______¶¶___¶_____¶____¶____¶____¶\n"
		"_______¶¶_______¶¶__________¶_________¶¶¶¶_____¶¶\n"
		"_____¶¶¶__¶¶_____¶¶¶¶¶¶¶¶¶¶¶_¶¶¶¶¶¶¶¶¶¶___¶¶¶¶¶¶\n"
		"____¶¶________¶____________________________¶\n"
		"¶¶¶¶¶¶¶______¶__¶____¶______¶¶__¶____¶¶____¶\n"
		"¶_____¶_____¶__¶____¶____¶_____¶________¶___¶\n"
		"¶¶___¶___¶_¶_____¶_______¶__________¶__¶__¶__¶¶¶\n"
		"__¶¶¶___¶___¶¶¶_¶__¶¶_¶¶___¶¶__¶¶__¶_____¶___¶__¶¶\n"
		"____¶¶_____¶___¶______________________¶_____¶____¶\n"
		"_____¶¶¶¶¶¶_____¶¶¶¶¶___¶¶_¶¶¶¶¶¶¶___¶__¶¶____¶¶¶\n"
		"____________________¶¶¶¶¶¶¶¶_____¶¶¶¶______¶¶¶¶\n"
		"_____________________¶____¶_________¶¶¶¶¶¶¶\n"
		"_____________________¶____¶\n"
		"_____________________¶¶¶¶¶¶\n";
		fout.close();
		std::cout<<temp.getName()<<" execute form "<<this->_name<<std::endl;
	}
	if (!this->isSigned){
		std::cout<<"Form "<<this->_name<<" unsigned!"<<std::endl;
	}
	if (temp.getGrade() > this->gradeExecute)
		std::cout<<"A bureaucrat "<<temp.getName()<<" doesn't have enough grade."<<std::endl;
}