#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap
{
	private:
		
	public:
		ScavTrap();
		ScavTrap(std::string const &name);
		ScavTrap(ScavTrap &a);
		~ScavTrap();
		
		void	attack(const std::string &target);
		void	guardGate();
		ScavTrap & operator=( ScavTrap const & value );
};

#endif