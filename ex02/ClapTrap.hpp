#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class   ClapTrap
{
	protected:
		std::string		_name;
		int				_hitPoints;
		int				_energyPoints;
		int				_attackDamage;

	public:
        ClapTrap();
		ClapTrap(std::string const &name);
		ClapTrap(ClapTrap &a);
		~ClapTrap();
        ClapTrap & operator=( ClapTrap const & value );

		int				getEnergy() const;
		int				getAttack() const;
		int             getHP() const;
        std::string		getName() const;
		void            setDamage(int amount);
		void            setHP(int amount);
		void            setEnergy(int amount);
        void	        attack(const std::string &target);
		void            takeDamage(unsigned int amount);
		void            beRepaired(unsigned int amount);
};

#endif