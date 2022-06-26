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
	class GradeTooHighException{
	private:
		std::string msg;
		int value;
	public:
		GradeTooHighException(std::string msg, int value);
		void what();
		~GradeTooHighException();
	};
	class GradeTooLowException{
	private:
		std::string msg;
		int value;
	public:
		GradeTooLowException(std::string msg, int value);
		~GradeTooLowException();
		void what();
	};
};

std::ostream	&operator<<( std::ostream &ostr, const Bureaucrat &instance );

#endif //CPP05_BUREAUCRAT_HPP
