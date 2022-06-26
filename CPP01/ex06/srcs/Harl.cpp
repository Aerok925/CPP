#include "../incs/Harl.hpp"

Harl::Harl() {

}

void Harl::debug() {
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
	<< std::endl;
}

void Harl::error() {
	std::cout<<"This is unacceptable! I want to speak to the manager now."
	<<std::endl;
}

void Harl::info() {
	std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put\n"
			   "enough bacon in my burger! If you did, I wouldn’t be asking for more!"
			   <<std::endl;
}

void Harl::warning() {
	std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for\n"
			   "years whereas you started working here since last month."
			   <<std::endl;
}

void Harl::complain(std::string str) {

	state[0].key = "DEBUG";
	state[3].key = "ERROR";
	state[1].key = "INFO";
	state[2].key = "WARNING";
	state[0].ptr = &Harl::debug;
	state[3].ptr = &Harl::error;
	state[1].ptr = &Harl::info;
	state[2].ptr = &Harl::warning;
	int i = 0;
	for (; i < 4; ++i)
	{
		if (str == state[i].key)
			break;
	}
	switch (i) {
		case 0:
			std::cout<<"[ "<<state[0].key<<" ]"<<std::endl;
			(this->*(state[0].ptr))();
			std::cout<<std::endl;
		case 1:
			std::cout<<"[ "<<state[1].key<<" ]"<<std::endl;
			(this->*(state[1].ptr))();
			std::cout<<std::endl;
		case 2:
			std::cout<<"[ "<<state[2].key<<" ]"<<std::endl;
			(this->*(state[2].ptr))();
			std::cout<<std::endl;
		case 3:
			std::cout<<"[ "<<state[3].key<<" ]"<<std::endl;
			(this->*(state[3].ptr))();
			std::cout<<std::endl;
			break;
		default:
			std::cout<<"[ Probably complaining about insignificant problems ]"
					 <<std::endl;
	}
}
