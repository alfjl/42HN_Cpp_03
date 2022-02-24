#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ScavTrap    st1("Incredible Ike");
    ScavTrap    st2("Literaly always loosing Lothar");
    ScavTrap    st3(st1);
    ScavTrap    st4("Name changing Nancy");
    FragTrap    ft1("Fragging Fridolin");

    std::cout << st1 << std::endl;
    std::cout << st2 << std::endl;
    std::cout << st3 << std::endl;
    std::cout << st4 << std::endl;
    std::cout << ft1 << std::endl;
    

    std::cout << "\n######### st1 attacks st2 #########\n\n" << std::endl;
    st1.attack("Literaly always loosing Lothar");
    st2.takeDamage(st1.getAttackDamage());
    std::cout << st2 << std::endl;
    st1.attack("Literaly always loosing Lothar");
    st2.takeDamage(st1.getAttackDamage());
    std::cout << st2 << std::endl;


    std::cout << "\n######### st2 repairs itself #########\n\n" << std::endl;
    st2.beRepaired(0);
    std::cout << st2 << std::endl;
    st2.beRepaired(-5);
    std::cout << st2 << std::endl;
    st2.beRepaired(1);
    std::cout << st2 << std::endl;
    st2.beRepaired(1);
    std::cout << st2 << std::endl;
    st2.beRepaired(1);
    std::cout << st2 << std::endl;
    st2.beRepaired(1);
    std::cout << st2 << std::endl;
    st2.beRepaired(1);
    std::cout << st2 << std::endl;
    st2.beRepaired(1);
    std::cout << st2 << std::endl;


    std::cout << "\n######### st1 attacks st2 #########\n\n" << std::endl;
    st1.attack("Literaly always loosing Lothar");
    st2.takeDamage(st1.getAttackDamage());
    std::cout << st2 << std::endl;
    st1.attack("Literaly always loosing Lothar");
    st2.takeDamage(st1.getAttackDamage());
    std::cout << st2 << std::endl;
    st1.attack("Literaly always loosing Lothar");
    st2.takeDamage(st1.getAttackDamage());
    std::cout << st2 << std::endl;
    st1.attack("Literaly always loosing Lothar");
    st2.takeDamage(st1.getAttackDamage());
    std::cout << st2 << std::endl;
    
    std::cout << "\n######### ft1 attacks st1 #########\n\n" << std::endl;
    std::cout << "Before attacks: " << st1 << std::endl;
    ft1.attack("Incredible Ike");
    st1.takeDamage(ft1.getAttackDamage());
    std::cout << st1 << std::endl;
    ft1.attack("Incredible Ike");
    st1.takeDamage(ft1.getAttackDamage());
    std::cout << st1 << std::endl;

    std::cout << "\n######### GATE KEEPER #########\n\n" << std::endl;
    st3.guardGate();
    std::cout << std::endl;

    std::cout << "\n######### ASSIGNMENT OPERATOR #########\n\n" << std::endl;
    std::cout << "st4 BEFORE assignment: " << st4 << std::endl;
    st4 = st2;
    std::cout << "st4 AFTER assignment: " << st4 << std::endl;

    std::cout << "\n######### OVERVIEW #########\n\n" << std::endl;
    std::cout << st1 << std::endl;
    std::cout << st2 << std::endl;
    std::cout << st3 << std::endl;
    std::cout << ft1 << std::endl;


    return (0);
}
