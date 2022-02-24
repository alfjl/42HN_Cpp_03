#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap()
{
    this->_name = "----";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "Default constructor for DiamondTrap '" << this->_name << "' called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_trap")
{
    this->_name = name;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "Constructor for DiamondTrap '" << this->_name << "' called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
    *this = other;
    std::cout << "Copy constructor for DiamondTrap '" << this->_name << "' called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "Destructor for DiamondTrap '" << this->_name << "' called" << std::endl;
}

DiamondTrap    &DiamondTrap::operator=(const DiamondTrap &src)
{
    if (this != &src)
    {
        ClapTrap::_name = src._name + "_clap_trap";
        this->_name = src._name;
        this->_hitPoints = src._hitPoints;
        this->_energyPoints = src._energyPoints;
        this->_attackDamage = src._attackDamage;
    }    
    return (*this);
}

void        DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void        DiamondTrap::whoAmI(void)
{
    std::cout << "Name: " << this->_name << "\nBase class name: " << ClapTrap::_name << std::endl;
}
