// #include "ClapTrap.hpp"
// #include "ScavTrap.hpp"

// int main ()
// {
//     ClapTrap c1("Bisou");
//     ScavTrap c2("Anguerrand");
//     c2.attack("John");
//     c2.attack("John");
//     c2.takeDamage(5);
//     c2.takeDamage(5);
//     c2.beRepaired(5);
//     c2.guardGate();
//     c1.attack("Vanessa");
// }

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap a("Antonia");
    ScavTrap b("Daisy");
    a.attack("Target");
    b.attack("Target");

    b.takeDamage(50);
    b.beRepaired(10);

    for (int i = 0; i < 10; i++)
        a.attack("Dummy");
    b.guardGate();

    return 0;
}