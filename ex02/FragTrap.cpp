#include "FragTrap.hpp"

FragTrap::FragTrap () : ClapTrap()
 {
	std::cout << "FragTrap Default Conestructor  is called" << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap (const std::string& name) : ClapTrap(name) {
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap paramater Conestructor  is called" << std::endl;
}

FragTrap::FragTrap (const FragTrap& ob) : ClapTrap(ob) {
	std::cout << "FragTrap copy Conestructor is called" << std::endl;
}

FragTrap& FragTrap::operator= (const FragTrap& ob) {
	std::cout << "FragTrap copy assignment operator is called" << std::endl;
	ClapTrap::operator=(ob);
	return *this;
}

FragTrap::~FragTrap () {
	std::cout << "FragTrap Destruction is called " << std::endl;
}

void	FragTrap::highFivesGuys ( void )
{
    std::cout << "FragTrap " << name << " requests a HIGH FIVE! :D" << std::endl;
}
