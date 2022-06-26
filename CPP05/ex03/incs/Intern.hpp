//
// Created by John Nappa on 4/2/22.
//

#ifndef CPP05_INTER_HPP
#define CPP05_INTER_HPP

#include "../incs/ShrubberyCreationForm.hpp"
#include "../incs/PresidentialPardonForm.hpp"
#include "../incs/RobotomyRequestForm.hpp"

class Intern {
public:
	Intern(){};
	Intern(const Intern&temp);
	~Intern(){};
	Intern &operator=(const Intern&temp);
	Form *makeForm(std::string request, std::string target);
	class InternExeption :  public std::exception{
		public:
			InternExeption(){};
			virtual  const char *what() const throw();
			virtual  ~InternExeption() throw() {};
	};

private:
	Form *newPresident(std::string target);
	Form *newShrubbery(std::string target);
	Form *newRobot(std::string target);

	struct t_set{
		std::string key;
		Form* (Intern::*func)(std::string target);
	};
	t_set set[3];


};


#endif //CPP05_INTER_HPP
