#include "../incs/File.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 4)
	{
		std::cerr<<"# INVALID NUMBER OF ARGUMENTS.\n";
		return (1);
	}
	File p(argv[1], argv[2], argv[3]);
	if (p.replace())
		return (1);
	return (0);
}