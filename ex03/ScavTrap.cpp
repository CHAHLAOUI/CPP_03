
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() 
{
    hitPoints    = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap Default Constructor is called" << std::endl;
}


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    hitPoints    = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap par Constructor is called" << std::endl;
}

ScavTrap::ScavTrap (const ScavTrap& obj) : ClapTrap(obj)
{
	std::cout << "  Conestructor copy is called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& obj)
{
	std::cout << "ScavTrap copy assignment operator is called" << std::endl;
	ClapTrap::operator=(obj);
	return (*this);
}

ScavTrap::~ScavTrap ()
{
	std::cout << "Scavtrap Destruction is called " << std::endl;
}

void	ScavTrap::guardGate( void )
{
    std::cout << "ScavTrap " << name << " is now in Gate Keeper mode!" << std::endl;
}

void	ScavTrap::attack(const std::string& target )
{
	if (hitPoints == 0 || energyPoints == 0)
    {
		std::cout << "ScavTrap " << name << " attack, it's out of energy!" << std::endl;
		return ;
	}
    std::cout << "ScavTrap " << name << " attacks " << target 
		<< ", causing " << attackDamage << " points of damage!" << std::endl;
	energyPoints--;
}
