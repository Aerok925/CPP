#ifndef CPP_PHONEBOOK_HPP
# define CPP_PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
public:
	void information();
	void visual();
	PhoneBook() {id = 0;}
	Contact book[8];
	int id;
};

#endif //CPP_PHONEBOOK_HPP
