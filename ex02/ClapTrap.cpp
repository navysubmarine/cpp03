#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : my_name(name), hit_pts(10), energy_pts(10), attack_damage_pts(0)
{
    std::cout << "Hello my name is " << my_name << "." << std::endl;
}

ClapTrap::ClapTrap() : my_name("Yannick"), hit_pts(10), energy_pts(10), attack_damage_pts(0)
{
    std::cout << "Hello my name is " << my_name << "." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ref) : my_name(ref.my_name), hit_pts(ref.hit_pts), energy_pts(ref.energy_pts), attack_damage_pts(ref.attack_damage_pts)
{
    std::cout << "Hello my name is " << my_name << " and i am a copy." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ref)
{
    my_name = ref.my_name;
    hit_pts = ref.hit_pts;
    energy_pts = ref.energy_pts;
    attack_damage_pts = ref.attack_damage_pts;
    std::cout << "Hello my my_name is " << my_name << " and I am a copy twin." << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Claptrap named " << my_name << " died." << std::endl;
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
    std::cout << "ClapTrap " << my_name << " attacks " << target << ", causing " << 
    attack_damage_pts << " points of damage !!!" << std::endl;
    std::cout << "-1 energy point." << std::endl;
    energy_pts--;
    std::cout << "ClapTrap named " << my_name << ": Current energy points : " << energy_pts << std::endl << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << my_name << " is taking damage... Losing " << amount << " hit point(s)" << std::endl;
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
    std::cout << my_name << " is repairing himself... Regaining " << amount << " hit point(s)" << std::endl;
    hit_pts += amount;
    std::cout << "Current hit points : " << hit_pts << std::endl;    
    std::cout << "-1 energy point." << std::endl;
    energy_pts--;
    std::cout << my_name << ": Current energy points : " << energy_pts << std::endl << std::endl;
}