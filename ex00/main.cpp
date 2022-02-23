#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    ct1("The undefeatable Ike");
    ClapTrap    ct2("The always loosing Lothar");
    ClapTrap    ct3(ct1);

    ct1.attack("ct2");
    ct2.takeDamage(ct1.getAttackDamage());
    //std::cout << ct2 << std::endl;
    ct1.attack("ct2");
    ct2.takeDamage(ct1.getAttackDamage());
    //std::cout << ct2 << std::endl;


    ct2.beRepaired(0);
    //std::cout << ct2 << std::endl;
    ct2.beRepaired(-5);
    //std::cout << ct2 << std::endl;
    ct2.beRepaired(1);
    //std::cout << ct2 << std::endl;
    ct2.beRepaired(1);
    //std::cout << ct2 << std::endl;
    ct2.beRepaired(1);
    //std::cout << ct2 << std::endl;
    ct2.beRepaired(1);
    //std::cout << ct2 << std::endl;
    ct2.beRepaired(1);
    //std::cout << ct2 << std::endl;
    ct2.beRepaired(1);
    //std::cout << ct2 << std::endl;


    //std::cout << ct1 << std::endl;
    //std::cout << ct2 << std::endl;
    //std::cout << ct3 << std::endl;


    return (0);
}
