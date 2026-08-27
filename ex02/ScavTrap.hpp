#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& reference);
        ScavTrap& operator=(const ScavTrap& reference);
        ~ScavTrap();
        void guardGate();
        void attack(const std::string& target);
};

#endif