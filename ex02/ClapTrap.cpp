#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ClapTrap::ClapTrap(std::string const &name)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &a)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_name = a.getName();
	this->_hitPoints = a.getHP();
	this->_energyPoints = a.getEnergy();
	this->_attackDamage = a.getAttack();
}

ClapTrap & ClapTrap::operator=( ClapTrap const & value )
{
        std::cout << "Copy assignement operator called" << std::endl;
		this->_name = value.getName();
		this->_hitPoints = value.getHP();
		this->_energyPoints = value.getEnergy();
		this->_attackDamage = value.getAttack();
        return (*this);
}

std::string	ClapTrap::getName() const
{
	return(this->_name);
}
int		ClapTrap::getAttack() const
{
	return(this->_attackDamage);
}

int     ClapTrap::getEnergy() const
{
	return(this->_energyPoints);
}

int		ClapTrap::getHP() const
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

void    ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints <= 0)
    {
		std::cout << "Sorry, your player don't have energy points." << std::endl;
		return ;
    }
	std::cout << "ClapTrap " << getName() << " regained " << amount << " hit points." << std::endl;
	_hitPoints += amount;
	setEnergy(_energyPoints - 1);
}