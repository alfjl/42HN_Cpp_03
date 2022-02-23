#include "ClapTrap.hpp"


ClapTrap::ClapTrap(const std::string name)
    //: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
    : _name(name), _hitPoints(5), _energyPoints(5), _attackDamage(2)
{
    std::cout << "Default constructor for ClapTrap '" << this->_name << "' called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    *this = other; 
    std::cout << "Copy constructor for ClapTrap '" << this->_name << "' called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor for ClapTrap '" << this->_name << "' called" << std::endl;
}


ClapTrap    &ClapTrap::operator=(const ClapTrap &src)
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


void    ClapTrap::attack(const std::string &target)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        std::cout << "ClapTrap '" << this->_name << "' attacks " << target
            << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
            this->_energyPoints--;
    }
    else
        std::cout << "ClapTrap '" << this->_name << "' does not have enough energy or hit points!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints < this->_attackDamage)
    {
        this->_hitPoints = 0;
        std::cout << "ClapTrap '" << this->_name << "' was attacked and lost all remaining hit points!" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap '" << this->_name << "' was attacked and lost "
            << amount << " hit points!" << std::endl;
        this->_hitPoints -= this->_attackDamage;
    }
}

void    ClapTrap::beRepaired(const int amount)
{
    if (amount > 0)
    {
        if (this->_energyPoints > 0 && this->_hitPoints > 0)
        {
            std::cout << "ClapTrap '" << this->_name << "' repaired itself!" << std::endl;
            this->_energyPoints--;
            this->_hitPoints += amount;
        }
        else
            std::cout << "ClapTrap '" << this->_name << "' does not have enough energy or hit points!" << std::endl;
    }
    else
        std::cout << "Amount to repair has to be bigger than 0!" << std::endl;
}

unsigned int    ClapTrap::getAttackDamage() const
{
    return (this->_attackDamage);
}

//std::ostream &operator<<(std::ostream &o, const ClapTrap &ct)
//{
    //o << ct._name << "\nhit points: " << ct._hitPoints
        //<< "\nenergy points: " << ct._energyPoints
        //<< "\nattack damage: " << ct._attackDamage;
    //return (o);
//}
