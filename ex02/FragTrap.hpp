#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap
{
    private:
        
    public:
        FragTrap();
        FragTrap(std::string const &name);
        FragTrap(FragTrap &a);
        ~FragTrap();

        void highFivesGuys(void) const;
		FragTrap & operator = ( FragTrap const & value );
};

#endif