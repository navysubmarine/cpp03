#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    my_name = "Gertrude";
    hit_pts = 100;
    energy_pts = 100;
    attack_damage_pts = 30;
    std::cout << "FragTrap named " << my_name << " has been created." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    hit_pts = 100;
    energy_pts = 100;
    attack_damage_pts = 30;
    std::cout << "FragTrap named " << my_name << " has been created." << std::endl;
}

FragTrap::FragTrap(const FragTrap& ref) : ClapTrap(ref)
{
    my_name = ref.my_name;
    hit_pts = ref.hit_pts;
    energy_pts = ref.energy_pts;
    attack_damage_pts = ref.attack_damage_pts;
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& ref)
{
    ClapTrap::operator=(ref);
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    return (*this);
}


FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << my_name << " is dead." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "Hey !! Wanna high five with FragTrap " << my_name << " ??" << std::endl;
}