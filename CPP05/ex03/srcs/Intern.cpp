//
// Created by John Nappa on 4/2/22.
//

#include "../incs/Intern.hpp"

Intern::Intern(const Intern &temp) {
	*this = temp;
}

Intern &Intern::operator=(const Intern &temp) {
	(void)temp;
	return(*this);
}

Form *Intern::newPresident(std::string target){
	return new PresidentialPardonForm(target);
}

Form *Intern::newRobot(std::string target){
	return new RobotomyRequestForm(target);
}

Form *Intern::newShrubbery(std::string target){
	return new ShrubberyCreationForm(target);
}

const char *Intern::InternExeption::what() const throw() {
	return "Unknown request";
}

Form *Intern::makeForm(std::string request, std::string target) {
	set[0].key = "shrubbery creation";
	set[1].key = "presidential pardon";
	set[2].key = "robotomy request";
	set[0].func = &Intern::newShrubbery;
	set[1].func = &Intern::newPresident;
	set[2].func = &Intern::newRobot;

	for (int i = 0; i < 3; i++){
		if (set[i].key == request)
		{
			std::cout<<"Intern creates "<<request<<std::endl;
			return (this->*(set[i].func))(target);
		}
	}
	throw Intern::InternExeption();
	return NULL;
}