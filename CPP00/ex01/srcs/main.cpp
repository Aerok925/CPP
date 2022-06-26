#include "../incs/PhoneBook.hpp"

int main()
{
	std::string str;
	PhoneBook a;
	bool go = 1;
	while (go)
	{
		std::cout<<"> ";
		if (std::getline(std::cin, str) == 0)
			break;
		if (str == "ADD")
		{
			if (a.book[a.id].create_contact())
			{
				if (a.id == 7)
					a.id = 0;
				else
					a.id++;
			}
		}
		if (std::strcmp(str.c_str(), "EXIT") == 0)
			go = 0;
		if (std::strcmp(str.c_str(), "SEARCH") == 0)
		{
			a.visual();
			a.information();
		}
	}
}