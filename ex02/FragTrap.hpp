#pragma once

#include "ClapTrap.hpp"

class   FragTrap : public ClapTrap
{
public:
    FragTrap(void);
    FragTrap(const std::string name);
    FragTrap(const FragTrap &other);
    ~FragTrap(void);

    FragTrap    &operator=(const FragTrap &src);

    void        attack(const std::string &target);
    void        highFivesGuys(void);
};
