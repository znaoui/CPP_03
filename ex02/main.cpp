#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	testClap("Kayna");
	ScavTrap	testScav("Nassim");
	FragTrap	testFrag("Nordine");

	std::cout << std::endl << "Name of my ClapTrap : " << testClap.getName() << std::endl;
	std::cout << "Hit points of my ClapTrap : " << testClap.getHP() << std::endl;
	std::cout << "Attack damage of my ClapTrap : " << testClap.getAttack() << std::endl;
	std::cout << "Energy level of my ClapTrap : " << testClap.getEnergy() << std::endl;
	std::cout << std::endl << "Name of my ClapTrap : " << testScav.getName() << std::endl;
	std::cout << "Hit points of my ClapTrap : " << testScav.getHP() << std::endl;
	std::cout << "Attack damage of my ClapTrap : " << testScav.getAttack() << std::endl;
	std::cout << "Energy level of my ScavTrap : " << testScav.getEnergy() << std::endl;
	std::cout << std::endl << "Name of my FragTrap : " << testFrag.getName() << std::endl;
	std::cout << "Hit points of my FragTrap : " << testFrag.getHP() << std::endl;
	std::cout << "Attack damage of my FragTrap : " << testFrag.getAttack() << std::endl;
	std::cout << "Energy level of my FragTrap : " << testFrag.getEnergy() << std::endl;
	std::cout << std::endl;
	testFrag.attack("red laser");
	std::cout << "Energy level of my FragTrap : " << testFrag.getEnergy() << std::endl;
	testFrag.attack("thunder");
	std::cout << "Energy level of my FragTrap : " << testFrag.getEnergy() << std::endl;
	std::cout << "Changing the energy level of my FragTrap to 0" << std::endl;
	testFrag.setEnergy(0);
	std::cout << "Energy level of my Scavtrap : " << testFrag.getEnergy() << std::endl;
	testFrag.attack("thunder");
	std::cout << std::endl;
	testScav.attack("red laser");
	std::cout << "Energy level of my ScavTrap : " << testScav.getEnergy() << std::endl;
	testScav.guardGate();
	testFrag.highFivesGuys();
	std::cout << std::endl;
}