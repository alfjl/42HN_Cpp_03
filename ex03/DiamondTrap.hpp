#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class   DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string     _name;

public:
    DiamondTrap(void);
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &other);
    ~DiamondTrap(void);

    DiamondTrap &operator=(const DiamondTrap &src);
    
    void    attack(const std::string &target);
    void    whoAmI(void);
};
