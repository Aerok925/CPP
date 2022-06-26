#include "Zombie.hpp"


Zombie::~Zombie() {
    std::cout<<name<<" is dead"<<std::endl;
}

Zombie::Zombie(std::string name) {
    this->name = name;
	announcement();
}

void Zombie::Say_name() {
    std::cout<<name<<": ";
}

Zombie::Zombie() {}

void Zombie::announcement() {
    std::cout<<name<<": "<< "BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie *newZombie(std::string name)
{
    return (new Zombie(name));
}

void randomChump(std::string name)
{
    Zombie temp(name);
}

void Zombie::setname(std::string name) {
    this->name = name;
}
