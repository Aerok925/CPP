#include "../incs/Contact.hpp"

void Contact::get_more_information() {
	std::cout<<"First Name: "<<first_name<<std::endl;
	std::cout<<"Last Name: "<<name<<std::endl;
	std::cout<<"Nickename: "<<nickname<<std::endl;
	std::cout<<"NUmber: "<<number<<std::endl;
	std::cout<<"Secret: "<<first_name<<std::endl;
}

int Contact::get_vision() {
	return (vision);
}

void Contact::error_line() {
	std::cout<<std::endl<<"ERROR!"<<std::endl;
	this->vision = 0;
}


int Contact::error_save_line() {
	this->vision = 0;
	std::cout<<std::endl<<"# CANT SAVE EMPTY CONTACT!"<<std::endl;
	return (0);
}

int Contact::create_contact() {
	this->vision = 1;
	if (!add_first_name() && this->vision == 1)
		error_line();
	if (this->vision == 1 && !add_name())
		error_line();
	if (this->vision == 1 && !add_nickname())
		error_line();
	if (this->vision == 1 && !add_number())
		error_line();
	if (this->vision == 1 && !add_secret())
		error_line();
	if (this->vision == 1)
		std::cout << "# Contact added !" << std::endl;
	return (this->vision);
}

void Contact::get()
{
	std::cout<<name;
}

void Contact::display_header(int index) {
	std::cout << "|" << std::setw(10)<< index;
	std::cout << "|";
	if (std::strlen(first_name) > 10)
	{
		std::string str=first_name;
		std::cout<<str.substr(0, 9)<<".";
	}
	else
		std::cout<<std::setw(10)<<first_name;
	std::cout << "|";
	if (std::strlen(name) > 10)
	{
		std::string str=name;
		std::cout<<str.substr(0, 9)<<".";
	}
	else
		std::cout<<std::setw(10)<<name;
	std::cout << "|";
	if (std::strlen(nickname) > 10)
	{
		std::string str=nickname;
		std::cout<<str.substr(0, 9)<<".";
	}
	else
		std::cout<<std::setw(10)<<nickname;
	std::cout << "|"<<std::endl;
}

int Contact::add_name() {
	std::cout<< "Input second name pls: ";
	if (std::cin.getline(name, 30, '\n') == 0)
		return (0);
	if (std::strlen(name) == 0)
		return (error_save_line());
	return (1);
}

int Contact::add_first_name() {
	std::cout<< "Input first name pls: ";
	if (std::cin.getline(first_name, 30, '\n') == 0)
		return (0);
	if (std::strlen(first_name) == 0)
		return (error_save_line());
	return (1);
}

int Contact::add_number() {
	std::cout<< "Input number pls: ";
	if (std::cin.getline(number, 20, '\n') == 0)
		return (0);
	if (std::strlen(number) == 0)
		return (error_save_line());
	return (1);
}

int Contact::add_nickname() {
	std::cout<< "Input nickname pls: ";
	if (std::cin.getline(nickname, 30, '\n') == 0)
		return (0);
	if (std::strlen(nickname) == 0)
		return (error_save_line());
	return (1);
}

int Contact::add_secret() {
	std::cout<< "Input secret pls: ";
	if (std::cin.getline(secret, 200, '\n') == 0)
		return (0);
	if (std::strlen(secret) == 0)
		return (error_save_line());
	return (1);
}
