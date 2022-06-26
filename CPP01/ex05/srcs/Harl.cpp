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
	for (int i = 0; i < 4; ++i)
	{
		if (str == state[i].key)
			(this->*(state[i].ptr))();
	}
}
