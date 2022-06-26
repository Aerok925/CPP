#ifndef CPP_CONTACT_HPP
# define CPP_CONTACT_HPP

# include "iostream"
# include <iomanip>
# include <string>

class Contact{
public:
	Contact(){vision = 0;}
	void get();
	int create_contact();
	int get_vision();
	void display_header(int);
	void get_more_information();
private:
	int error_save_line();
	int	vision;
	int add_name();
	int add_first_name();
	int add_number();
	int add_nickname();
	int add_secret();
	void error_line();
	char name[30];
	char first_name[30];
	char nickname[30];
	char secret[200];
	char number[20];
};

#endif //CPP_CONTACT_HPP
