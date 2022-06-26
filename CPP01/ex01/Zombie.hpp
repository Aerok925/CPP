#ifndef EX01_ZOMBIE_HPP
#define EX01_ZOMBIE_HPP

#include <iostream>

class Zombie{
public:
    Zombie();
    Zombie(std::string);
    void announcement(void);
    ~Zombie();
    void setname(std::string);
private:
    void Say_name();
    std::string name;
};

Zombie *zombieHorde(int, std::string);

#endif //EX01_ZOMBIE_HPP
