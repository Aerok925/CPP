//
// Created by John Nappa on 4/2/22.
//

#ifndef CPP05_PRESIDENTIALPARDONFORM_HPP
#define CPP05_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : virtual public Form{
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& temp);
	PresidentialPardonForm &operator=(const PresidentialPardonForm& temp);
	~PresidentialPardonForm(){};
	void execute(Bureaucrat const &temp) const;
private:
	std::string target;
	PresidentialPardonForm() {};
};


#endif //CPP05_PRESIDENTIALPARDONFORM_HPP
