#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    hit_pts = 100;
    energy_pts = 50;
    attack_damage_pts = 20;
    std::cout << "ScavTrap named " << my_name << " has been created." << std::endl;
    // std::cout << my_name << "'s hit points: " << hit_pts << std::endl;
    // std::cout << my_name << "'s energy points: " << energy_pts << std::endl;
    // std::cout << my_name << "'s attack damage points: " << attack_damage_pts << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << my_name << " is dead." << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap named " << my_name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (energy_pts == 0)
    {
        std::cout << "ScavTrap named " << my_name << " doesn't have enough energy..." << std::endl;
        return;
    }
    else if (hit_pts == 0)
    {
        std::cout << "ScavTrap named " << my_name << " doesn't have enough hit points left..." << std::endl;
        return;
    }
    std::cout << "ScavTrap " << my_name << " attacks " << target << ", causing " << 
    attack_damage_pts << " points of damage !!!" << std::endl;
    std::cout << "-1 energy point." << std::endl;
    energy_pts--;
    std::cout << "ScavTrap named " << my_name << ": Current energy points : " << energy_pts << std::endl << std::endl;
}