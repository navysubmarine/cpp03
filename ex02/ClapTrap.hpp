#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& ref);
        ClapTrap& operator=(const ClapTrap& ref);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    protected:
        std::string my_name;
        int hit_pts;
        int energy_pts;
        int attack_damage_pts;
};

#endif