#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap()
{
    std::cout << "Default constructor for DiamondTrap '" << this->_name << "' called" << std::endl;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_trap")
{
    std::cout << "Constructor for DiamondTrap '" << this->_name << "' called" << std::endl;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
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
