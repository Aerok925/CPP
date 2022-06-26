#include "../incs/ShrubberyCreationForm.hpp"
#include "../incs/PresidentialPardonForm.hpp"
#include "../incs/RobotomyRequestForm.hpp"


int main(){
	try{
		Bureaucrat a("asd", 5);
		a.upGrade();
		a.upGrade();
		a.upGrade();
		a.upGrade();
//		a.upGrade();
		Bureaucrat c("Vova", 137);
//		c.lowGrade();
		std::cout<<a<<c<<std::endl;
		ShrubberyCreationForm b("Asd");
		std::cout<<b<<std::endl;
		b.signForm(c);
		b.signForm(a);
		c.executeForm(b);
		PresidentialPardonForm q("Vladimir");
		Bureaucrat miracle("Mirage", 10);
		q.signForm(miracle);
		miracle.upGrade();
		miracle.upGrade();
		miracle.upGrade();
		miracle.upGrade();
		miracle.upGrade();
		q.execute(miracle);
		RobotomyRequestForm robo("Robot");
		robo.signForm(miracle);
		robo.execute(miracle);
		robo.execute(miracle);
		robo.execute(miracle);
		robo.execute(miracle);
		robo.execute(miracle);
		robo.execute(miracle);
		robo.execute(miracle);
		robo.execute(miracle);
		robo.execute(miracle);
		robo.execute(miracle);
		robo.execute(miracle);
		robo.execute(miracle);
		robo.execute(miracle);
		robo.execute(miracle);
		robo.execute(miracle);
		robo.execute(miracle);
		robo.execute(miracle);
		robo.execute(miracle);

	}
	catch (std::exception &ex)
	{
		std::cout<<ex.what();
	}
}

