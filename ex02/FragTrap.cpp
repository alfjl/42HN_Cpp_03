#include "FragTrap.hpp"


FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
    std::cout << "Default constructor for FragTrap '" << this->_name << "' called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    *this = other;
    std::cout << "Copy constructor for FragTrap '" << this->_name << "' called" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "Destructor for FragTrap '" << this->_name << "' called" << std::endl;
}

FragTrap    &FragTrap::operator=(const FragTrap &src)
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

void        FragTrap::attack(const std::string &target)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        std::cout << "FragTrap '" << this->_name << "' attacks " << target
            << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
            this->_energyPoints--;
    }
    else
        std::cout << "FragTrap '" << this->_name << "' does not have enough energy or hit points!" << std::endl;
}

void        FragTrap::highFivesGuys(void)
{
        std::cout << "High five, you beautiful basterds!!!!!" << std::endl;
}
