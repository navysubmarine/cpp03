#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "----- Construction -----" << std::endl;
    ClapTrap clap("Antonia");
    ScavTrap scav("Daisy");
    FragTrap frag("Bob");

    std::cout << std::endl << "----- Copy constructor -----" << std::endl;
    FragTrap fragCopy(frag);

    std::cout << std::endl << "----- Copy assignment -----" << std::endl;
    ScavTrap scavCopy;
    scavCopy = scav;

    std::cout << std::endl << "----- Basic attacks -----" << std::endl;
    clap.attack("Dummy");
    scav.attack("Dummy");
    frag.attack("Dummy");

    std::cout << std::endl << "----- Damage and repair -----" << std::endl;
    scav.takeDamage(50);
    scav.beRepaired(10);

    std::cout << std::endl << "----- Special abilities -----" << std::endl;
    scav.guardGate();
    frag.highFivesGuys();

    std::cout << std::endl << "----- Draining energy points -----" << std::endl;
    for (int i = 0; i < 11; i++)
        clap.attack("Dummy");

    std::cout << std::endl << "----- Draining hit points -----" << std::endl;
    scavCopy.takeDamage(1000);
    scavCopy.attack("Dummy");

    std::cout << std::endl << "----- Destruction -----" << std::endl;
    return 0;
}