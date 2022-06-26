//
// Created by John Nappa on 4/2/22.
//

#ifndef CPP05_ROBOTOMYREQUESTFORM_HPP
#define CPP05_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : virtual public Form{
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& temp);
	RobotomyRequestForm &operator=(const RobotomyRequestForm& temp);
	~RobotomyRequestForm(){};
	void execute(Bureaucrat const &temp) const;
private:
	std::string target;
	RobotomyRequestForm() {};
};


#endif //CPP05_ROBOTOMYREQUESTFORM_HPP
