#include <iostream>

class Zombie{
public:
    Zombie();
    Zombie(std::string);
    void announcement(void);
    ~Zombie();
private:
    void Say_name();
    std::string name;
};

Zombie::~Zombie() {
    std::cout<<name<<" is dead"<<std::endl;
}

Zombie::Zombie(std::string name) {
    this->name = name;
    Say_name();
    std::cout<<"BraiiiiiiinnnzzzZ..."<<std::endl;
}

void Zombie::Say_name() {
    std::cout<<name<<": ";
}

Zombie::Zombie() {}

void Zombie::announcement() {
    std::cout<<"<"<<name<<">: "<< "BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie *newZombie(std::string name)
{
    return (new Zombie(name));
}

void randomChump(std::string name)
{
    Zombie temp(name);
}

int main() {
    Zombie a("Mak");
    Zombie *p = newZombie("asd");
    randomChump("asd1");

    delete p;
}
