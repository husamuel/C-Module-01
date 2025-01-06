#include "Zombie.hpp"

Zombie::Zombie() : name("")
{
}

Zombie::Zombie(const std::string name) : name(name)
{
}

Zombie::~Zombie() {
    std::cout << this->name << " is destroyed" << std::endl;
}

void Zombie::announce() const {
    std::cout << name << ": BraiiiiiiinnnzzzZ" << std::endl;
}

void Zombie::setName(const std::string& name)
{
    this->name = name;
}