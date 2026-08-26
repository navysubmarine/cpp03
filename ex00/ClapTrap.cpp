#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string my_name) : name(my_name), hit_pts(10), energy_pts(10), damage_pts(0)
{
    std::cout << "Bonjour je m'appelle " << name << "." << std::endl;
}

ClapTrap::ClapTrap() : name("Yannick"), hit_pts(10), energy_pts(10), damage_pts(0)
{
    std::cout << "Bonjour je m'appelle " << name << "." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ref) : name(ref.name), hit_pts(ref.hit_pts), energy_pts(ref.energy_pts), damage_pts(ref.damage_pts)
{
    std::cout << "Bonjour je m'appelle " << name << " et je suis une copie." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ref)
{
    name = ref.name;
    hit_pts = ref.hit_pts;
    energy_pts = ref.energy_pts;
    damage_pts = ref.damage_pts;
    std::cout << "Bonjour je m'appelle " << name << " et je suis un jumeau." << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << name << " est mort." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << 
    damage_pts << " points of damage !!!" << std::endl;
}

// void ClapTrap::takeDamage(unsigned int amount)
// {}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " is repairing himself... Regaining " << amount << " hit point(s)" << std::endl:
    std::cout << "It costed him 1 energy point." << std::endl:
    energy_pts--;
    std::cout << "Current energy points : " << energy_pts << std::endl;
}