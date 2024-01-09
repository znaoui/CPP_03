#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	testClap("Kayna");
	ScavTrap	testScav("Nassim");

	std::cout << std::endl << "Name of my ClapTrap : " << testClap.getName() << std::endl;
	std::cout << "Hit points of my ClapTrap : " << testClap.getHP() << std::endl;
	std::cout << "Attack damage of my ClapTrap : " << testClap.getAttack() << std::endl;
	std::cout << "Energy level of my ClapTrap : " << testClap.getEnergy() << std::endl;
	std::cout << std::endl << "Name of my ScavTrap : " << testScav.getName() << std::endl;
	std::cout << "Hit points of my ScavTrap : " << testScav.getHP() << std::endl;
	std::cout << "Attack damage of my ScavTrap : " << testScav.getAttack() << std::endl;
	std::cout << "Energy level of my ScavTrap : " << testScav.getEnergy() << std::endl;
	std::cout << std::endl;
	testScav.attack("red laser");
	std::cout << "Energy level of my ScavTrap : " << testScav.getEnergy() << std::endl;
	testScav.attack("thunder");
	std::cout << "Energy level of my ScavTrap : " << testScav.getEnergy() << std::endl;
	std::cout << "Changing the energy level of my ScavTrap to 0" << std::endl;
	testScav.setEnergy(0);
	std::cout << "Energy level of my Scavtrap : " << testScav.getEnergy() << std::endl;
	testScav.attack("thunder");
	testScav.guardGate();
	std::cout << std::endl;
	testClap.attack("red laser");
	std::cout << "Energy level of my ClapTrap : " << testClap.getEnergy() << std::endl;
	std::cout << std::endl;
}