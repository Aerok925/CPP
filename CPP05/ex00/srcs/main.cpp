#include "../incs/Bureaucrat.hpp"

int main(){
	try{
		Bureaucrat a("asd", 5);
		a.upGrade();
		a.upGrade();
		a.upGrade();
		a.upGrade();
//		a.upGrade();
		Bureaucrat c("Vova", 150);
//		c.lowGrade();
		std::cout<<a<<c;
	}
	catch (Bureaucrat::GradeTooLowException &ex)
	{
		ex.what();
	}
	catch (Bureaucrat::GradeTooHighException &ex)
	{
		ex.what();
	}
}

