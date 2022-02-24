#pragma once

#include <iostream>
#include <string>

class   ClapTrap
{
protected:
    std::string     _name;
    unsigned int    _hitPoints;
    unsigned int    _energyPoints;
    unsigned int    _attackDamage;

public:
    ClapTrap(void);
    ClapTrap(const std::string name);
    ClapTrap(const ClapTrap &other);
    ~ClapTrap(void);

    ClapTrap    &operator=(const ClapTrap &src);

    void            attack(const std::string &target);
    void            takeDamage(const unsigned int amount);
    void            beRepaired(const int amount);
    std::string     getName() const;
    unsigned int    getHitPoints() const;
    unsigned int    getEnergyPoints() const;
    unsigned int    getAttackDamage() const;
};

std::ostream &operator<<(std::ostream &o, const ClapTrap &ct);
