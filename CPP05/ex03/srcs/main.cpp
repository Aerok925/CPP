#include "../incs/ShrubberyCreationForm.hpp"
#include "../incs/PresidentialPardonForm.hpp"
#include "../incs/RobotomyRequestForm.hpp"
#include "../incs/Intern.hpp"

int main(){
	try{
		Bureaucrat Vova("Vova", 1);
		Intern Anal;
		Form *analqwe;
		analqwe = Anal.makeForm("shrubbery creation", "Anal");
		Form *analqwe1;
		Form *analqwe2;
		analqwe1 = Anal.makeForm("presidential pardon", "Anal2");
		analqwe2 = Anal.makeForm("robotomy request", "Anal3");
		std::cout<<*analqwe<<std::endl;
		analqwe->signForm(Vova);
		analqwe1->signForm(Vova);
		analqwe2->signForm(Vova);
		analqwe->signForm(Vova);
		Vova.executeForm(*analqwe);
		Vova.executeForm(*analqwe1);
		Vova.executeForm(*analqwe2);
		std::cout<<*analqwe<<std::endl;
		delete analqwe;
		delete analqwe1;
		delete analqwe2;

	}
	catch (std::exception &ex)
	{
		std::cout<<ex.what();
	}
}

