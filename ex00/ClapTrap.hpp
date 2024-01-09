#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class   ClapTrap
{
	private:
		std::string		_name;
		int				_hitPoints;
		int				_energyPoints;
		int				_attackDamage;

	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &a);
		~ClapTrap();

		int				getEnergy();
		int				getAttack();
		int             getHP();
        std::string		getName();
		void            setDamage(int amount);
		void            setHP(int amount);
		void            setEnergy(int amount);
        void	        attack(const std::string &target);
		void            takeDamage(unsigned int amount);
		void            beRepaired(unsigned int amount);
};

#endif