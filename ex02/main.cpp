#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap a("Antonia");
    ScavTrap b("Daisy");
    FragTrap c("Bob");
    FragTrap d;
    d = c;
    a.attack("Target");
    b.attack("Target");

    b.takeDamage(50);
    b.beRepaired(10);

    for (int i = 0; i < 10; i++)
        a.attack("Dummy");
    b.guardGate();
    d.highFivesGuys();

    return 0;
}