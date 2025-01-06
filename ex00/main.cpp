#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main()
{
    Zombie* new_zombie = newZombie("New Zombie");
    new_zombie->announce();
    delete new_zombie;
    randomChump("Random Zombie");
}