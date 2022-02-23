#pragma once

#include <iostream>
#include <string>

class   ClapTrap
{
private:
    std::string     _name;
    unsigned int    _hitPoints;
    unsigned int    _energyPoints;
    unsigned int    _attackDamage;

public:
    ClapTrap(const std::string name);
    ClapTrap(const ClapTrap &other);
    ~ClapTrap();

    ClapTrap    &operator=(const ClapTrap &src);

    void            attack(const std::string &target);
    void            takeDamage(const unsigned int amount);
    void            beRepaired(const int amount);
    unsigned int    getAttackDamage() const;
};

//std::ostream ClapTrap::&operator<<(std::ostream &o, const ClapTrap &ct);
