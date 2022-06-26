//
// Created by John Nappa on 01/04/2022.
//

#ifndef CPP05_FORM_HPP
#define CPP05_FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:
	Form(const std::string &name, const int gradeRequired, const int gradeExecute);
	class GradeTooHighException : public std::exception{
		public:
			GradeTooHighException(){};
			virtual  const char *what() const throw();
			virtual  ~GradeTooHighException() throw() {};
	};
	class GradeTooLowException : public std::exception{
	public:
		GradeTooLowException(){};
		virtual  const char *what() const throw();
		virtual  ~GradeTooLowException() throw() {};
	};
	std::string getName() const;
	bool getSigned() const;
	int getRequired() const;
	int getExecute() const;
	void signForm(Bureaucrat &temp);
	virtual void execute(Bureaucrat const &temp) const = 0;
	virtual ~Form(){};
protected:
	Form();
	std::string _name;
	bool isSigned;
	int gradeRequired;
	int gradeExecute;
};

std::ostream &operator<<(std::ostream &out, const Form &temp);

#endif //CPP05_FORM_HPP
