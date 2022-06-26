#include "../incs/Harl.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout<<"# ERROR ARGUMENTS"<<std::endl;
		return (1);
	}
	Harl a;
	a.complain(argv[1]);
	return (0);
}