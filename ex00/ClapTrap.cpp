#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string my_name) : name(my_name), hit_pts(10), energy_pts(10), attack_damage_pts(0)
{
    std::cout << "Hello my name is " << name << "." << std::endl;
}

ClapTrap::ClapTrap() : name("Yannick"), hit_pts(10), energy_pts(10), attack_damage_pts(0)
{
    std::cout << "Hello my name is " << name << "." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ref) : name(ref.name), hit_pts(ref.hit_pts), energy_pts(ref.energy_pts), attack_damage_pts(ref.attack_damage_pts)
{
    std::cout << "Hello my name is " << name << " et je suis une copie." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ref)
{
    name = ref.name;
    hit_pts = ref.hit_pts;
    energy_pts = ref.energy_pts;
    attack_damage_pts = ref.attack_damage_pts;
    std::cout << "Hello my name is " << name << " et je suis un jumeau." << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << name << " died." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (energy_pts == 0)
    {
        std::cout << "I dont have any energy..." << std::endl;
        return;
    }
    else if (hit_pts == 0)
    {
        std::cout << "I dont have any hit points left..." << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << 
    attack_damage_pts << " points of damage !!!" << std::endl;
    std::cout << "It costed him 1 energy point." << std::endl;
    energy_pts--;
    std::cout << "Current energy points : " << energy_pts << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " is taking damage... Losing " << amount << " hit point(s)" << std::endl;
    hit_pts -= amount;
    std::cout << "Current hit points : " << hit_pts << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energy_pts == 0)
    {
        std::cout << "I dont have any energy..." << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " is repairing himself... Regaining " << amount << " hit point(s)" << std::endl;
    hit_pts += amount;
    std::cout << "Current hit points : " << hit_pts << std::endl;    
    std::cout << "It costed him 1 energy point." << std::endl;
    energy_pts--;
    std::cout << "Current energy points : " << energy_pts << std::endl;
}