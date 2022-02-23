#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap    ct1("The undefeatable Ike");
    ScavTrap    ct2("The always loosing Lothar");
    ScavTrap    ct3(ct1);
    ScavTrap    ct4("Name changing Nancy");

    std::cout << "\n######### ct1 attacks ct2 #########\n\n" << std::endl;
    ct1.attack("The always loosing Lothar");
    ct2.takeDamage(ct1.getAttackDamage());
    std::cout << ct2 << std::endl;
    ct1.attack("The always loosing Lothar");
    ct2.takeDamage(ct1.getAttackDamage());
    std::cout << ct2 << std::endl;


    std::cout << "\n######### ct2 repairs itself #########\n\n" << std::endl;
    ct2.beRepaired(0);
    std::cout << ct2 << std::endl;
    ct2.beRepaired(-5);
    std::cout << ct2 << std::endl;
    ct2.beRepaired(1);
    std::cout << ct2 << std::endl;
    ct2.beRepaired(1);
    std::cout << ct2 << std::endl;
    ct2.beRepaired(1);
    std::cout << ct2 << std::endl;
    ct2.beRepaired(1);
    std::cout << ct2 << std::endl;
    ct2.beRepaired(1);
    std::cout << ct2 << std::endl;
    ct2.beRepaired(1);
    std::cout << ct2 << std::endl;


    std::cout << "\n######### ct1 attacks ct2 #########\n\n" << std::endl;
    ct1.attack("The always loosing Lothar");
    ct2.takeDamage(ct1.getAttackDamage());
    std::cout << ct2 << std::endl;
    ct1.attack("The always loosing Lothar");
    ct2.takeDamage(ct1.getAttackDamage());
    std::cout << ct2 << std::endl;
    ct1.attack("The always loosing Lothar");
    ct2.takeDamage(ct1.getAttackDamage());
    std::cout << ct2 << std::endl;
    ct1.attack("The always loosing Lothar");
    ct2.takeDamage(ct1.getAttackDamage());
    std::cout << ct2 << std::endl;
    
    std::cout << "\n######### GATE KEEPER #########\n\n" << std::endl;
    ct3.guardGate();
    std::cout << std::endl;

    std::cout << "\n######### ASSIGNMENT OPERATOR #########\n\n" << std::endl;
    std::cout << "ct4 BEFORE assignment: " << ct4 << std::endl;
    ct4 = ct2;
    std::cout << "ct4 AFTER assignment: " << ct4 << std::endl;

    std::cout << "\n######### OVERVIEW #########\n\n" << std::endl;
    std::cout << ct1 << std::endl;
    std::cout << ct2 << std::endl;
    std::cout << ct3 << std::endl;


    return (0);
}
