#include "Zombie.hpp"

int main()
{
    Zombie * horde = zombieHorde(10, "New Zombie");
    for (int i = 0; i < 10; i++)
        horde[i].announce();
}