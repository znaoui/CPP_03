#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap has arrived." << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string const &name)
{
	std::cout << "ScavTrap has arrived." << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap &a)
{
	this->_name = a.getName();
	this->_hitPoints = a.getEnergy();
	this->_energyPoints = a.getAttack();
	this->_attackDamage = a.getHP();
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap has destroyed." << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " entered in Gate keeper mode." << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (_energyPoints <= 0)
    {
        std::cout << "Sorry, your player don't have energy points." << std::endl;
		return ;
    }
	std::cout << "ScavTrap " << getName() << " launch " << target << std::endl;
	setEnergy(_energyPoints - 1);
}

ScavTrap & ScavTrap::operator=( ScavTrap const & value )
{
        std::cout << "Copy assignement operator called" << std::endl;
		this->_name = value.getName();
		this->_hitPoints = value.getHP();
		this->_energyPoints = value.getEnergy();
		this->_attackDamage = value.getAttack();
        return (*this);
}