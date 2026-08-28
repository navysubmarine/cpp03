#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap a("Antonia");
    ScavTrap b("Bob");
    a.attack("Target");
    b.attack("Target");

    b.takeDamage(50);
    b.beRepaired(10);

    for (int i = 0; i < 10; i++)
        a.attack("Dummy");
    b.guardGate();

    return 0;
}