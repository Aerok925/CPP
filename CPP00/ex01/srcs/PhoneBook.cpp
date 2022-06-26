#include "../incs/PhoneBook.hpp"

void PhoneBook::information() {
	char str[5];
	std::cout<<"Enter the index: ";
	std::cin.getline(str, 5, '\n');
	int number = -1;
	number = std::atoi((char *)str);
	if (number > 0 and number < 9)
	{
		if (book[number - 1].get_vision() == 0)
			std::cout<<"# THIS CONTACT IS NOT ASSIGNED!"<<std::endl;
		else
			book[number - 1].get_more_information();
	}
	else
		std::cout<<"# INVALID NUMBER!"<<std::endl;
}

void PhoneBook::visual() {
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < 8; ++i)
	{
		if (book[i].get_vision() == 1)
			book[i].display_header(i + 1);
	}
	std::cout << "|-------------------------------------------|" << std::endl;
}