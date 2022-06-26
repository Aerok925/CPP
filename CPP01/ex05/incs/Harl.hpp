#ifndef CPP01_HARL_HPP
#define CPP01_HARL_HPP

#include "iostream"
#include <map>
#include "fstream"



class Harl {
	typedef struct s_state {
		std::string key;
		void(Harl::*ptr)(void);
	}t_state;
public:
	Harl();
	void complain(std::string);
private:
	t_state state[4];
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};



#endif //CPP01_HARL_HPP
