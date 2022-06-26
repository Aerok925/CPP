#include "../incs/Form.hpp"

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
		std::cout<<a<<c<<std::endl;
		Form b("Asd", 150, 150);
		std::cout<<b<<std::endl;
		b.signForm(c);
		b.signForm(a);
	}
	catch (std::exception &ex)
	{
		std::cout<<ex.what();
	}
}

