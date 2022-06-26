//
// Created by John Nappa on 4/2/22.
//

#ifndef CPP05_SHRUBBERYCREATIONFORM_HPP
#define CPP05_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : virtual public  Form{
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& temp);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm& temp);
	~ShrubberyCreationForm(){};
	void execute(Bureaucrat const &temp) const;
private:
	std::string target;
	ShrubberyCreationForm() {};
};


#endif //CPP05_SHRUBBERYCREATIONFORM_HPP
