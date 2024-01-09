#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &a)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_name = a.getName();
	this->_hitPoints = a.getHP();
	this->_energyPoints = a.getEnergy();
	this->_attackDamage = a.getAttack();
}

std::string	ClapTrap::getName()
{
	return(this->_name);
}
int		ClapTrap::getAttack()
{
	return(this->_attackDamage);
}

int		ClapTrap::getEnergy()
{
	return(this->_energyPoints);
}

int		ClapTrap::getHP()
{
	return(this->_hitPoints);
}

void	ClapTrap::setDamage(int amount)
{
	this->_attackDamage = amount;
}

void	ClapTrap::setHP(int amount)
{
	this->_hitPoints = amount;
}

void	ClapTrap::setEnergy(int amount)
{
	this->_energyPoints = amount;
}

void	ClapTrap::attack(const std::string &target)
{
	if (_energyPoints <= 0)
    {
        std::cout << "Sorry, your player don't have energy points." << std::endl;
		return ;
    }
	std::cout << "ClapTrap " << getName() << " attacks " << target << std::endl;
	setEnergy(_energyPoints - 1);
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	std::cout << "ClapTrap " << getName() << " take " << amount << " hit points of damages." << std::endl;
}

void 	ClapTrap::beRepaired(unsigned int amount)
{
	if ( _energyPoints <= 0)
    {
        std::cout << "Sorry, your player don't have energy points." << std::endl;
		return ;
    }
	std::cout << "ClapTrap " << getName() << " regained " << amount << " hit points." << std::endl;
	_hitPoints += amount;
	setEnergy(_energyPoints - 1);
}