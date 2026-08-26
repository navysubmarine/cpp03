#include "ClapTrap.hpp"

int main ()
{
    ClapTrap c1("Bisou");
    c1.attack("John");
    c1.attack("John");
    c1.takeDamage(5);
    c1.takeDamage(5);
    c1.beRepaired(5);
}