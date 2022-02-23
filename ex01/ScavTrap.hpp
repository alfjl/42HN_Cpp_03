#pragma once

#include "ClapTrap.hpp"

class   ScavTrap : public ClapTrap
{
public:
    ScavTrap(const std::string name);
    ScavTrap(const ScavTrap &other);
    ~ScavTrap(void);

    ScavTrap    &operator=(const ScavTrap &src);

    void        attack(const std::string &target);
    void        guardGate(void);
};
