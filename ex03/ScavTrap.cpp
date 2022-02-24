#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    std::cout << "Default constructor for ScavTrap '" << this->_name << "' called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
    std::cout << "Constructor for ScavTrap '" << this->_name << "' called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    *this = other;
    std::cout << "Copy constructor for ScavTrap '" << this->_name << "' called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Destructor for ScavTrap '" << this->_name << "' called" << std::endl;
}

ScavTrap    &ScavTrap::operator=(const ScavTrap &src)
{
    if (this != &src)
    {
        this->_name = src._name;
        this->_hitPoints = src._hitPoints;
        this->_energyPoints = src._energyPoints;
        this->_attackDamage = src._attackDamage;
    }    
    return (*this);
}

void        ScavTrap::attack(const std::string &target)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        std::cout << "ScavTrap '" << this->_name << "' attacks " << target
            << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
            this->_energyPoints--;
    }
    else
        std::cout << "ScavTrap '" << this->_name << "' does not have enough energy or hit points!" << std::endl;
}

void        ScavTrap::guardGate(void)
{
        std::cout << ">> ScavTrap '" << this->_name << "' is now in GATE KEEPER mode! <<" << std::endl;
}
