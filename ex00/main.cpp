#include "ClapTrap.hpp"

int     main(void)
{
        ClapTrap test("Shadowzzzz");

        std::cout << std::endl << "Energy level of my ClapTrap " << test.getName() << ": " << test.getEnergy() << std::endl;
        std::cout << "Hit point of my ClapTrap " << test.getName() << ": " << test.getHP() << std::endl;
        std::cout << std::endl;
        test.attack("thunder");
        test.takeDamage(3);
        std::cout << "Hit point of my ClapTrap " << test.getName() << ": " << test.getHP() << std::endl;
        std::cout << "Energy level of my ClapTrap " << test.getName() << ": " << test.getEnergy() << std::endl;
        std::cout << std::endl;
        test.setEnergy(1);
        std::cout << "Energy level of my ClapTrap " << test.getName() << ": " << test.getEnergy() << std::endl;
        test.attack("thunder");
        test.takeDamage(3);
        std::cout << "Hit point of my ClapTrap " << test.getName() << ": " << test.getHP() << std::endl ;
        std::cout << "Energy level of my ClapTrap " << test.getName() << ": " << test.getEnergy() << std::endl;
        std::cout << std::endl;
        test.attack("thunder");
        std::cout << "Hit point of my ClapTrap " << test.getName() << ": " << test.getHP() << std::endl ;
        test.setEnergy(1);
        std::cout << std::endl;
}