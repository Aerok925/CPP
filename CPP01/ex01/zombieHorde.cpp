#include "Zombie.hpp"
#include <string>

Zombie *zombieHorde(int N, std::string name){
    Zombie *p = new Zombie[N];
    for (int i = 0; i < N; i++)
        p[i].setname(name + std::to_string(i + 1));
    return (p);
}