#ifndef CPP05_BUREAUCRAT_HPP
#define CPP05_BUREAUCRAT_HPP

#include "iostream"

class Bureaucrat {
protected:
	std::string name;
	int grade;
public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat& temp);
	Bureaucrat(std::string name, int grade);
	Bureaucrat &operator=(const Bureaucrat& temp);
	void upGrade();
	void lowGrade();
	~Bureaucrat();
	std::string getName(void) const;
	int getGrade() const;
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
};

std::ostream	&operator<<( std::ostream &ostr, const Bureaucrat &instance );

#endif //CPP05_BUREAUCRAT_HPP
