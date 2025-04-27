/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahlao <achahlao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:45:52 by achahlao          #+#    #+#             */
/*   Updated: 2025/04/27 11:56:02 by achahlao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("") , hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap " << name << " Default constructor called\n";
}


ClapTrap::ClapTrap(const std::string& name) : name(name) , hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap " << name << " Parameterized constructor called\n" << std::endl;
}


ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " destructor is called " << std::endl; 
}


void ClapTrap::attack(const std::string& target) {
    if (hitPoints <= 0  || energyPoints <= 0)
    {
        std::cout << name << " is dead and can't attack!" << std::endl;
        return;
    }
    energyPoints--;
    std::cout << "ClapTrap " << name << " attacks " << target
              << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {	
	if (energyPoints <= 0 || hitPoints <= 0) 
    {
        std::cout << name << " is already dead!" << std::endl;
        return ;
    }
	if (hitPoints >= amount)
		hitPoints -= amount;
	else
		hitPoints = 0;
	std::cout << "ClapTrap " << name << " takes " << amount << " damage, " << std::endl; 
                   std::cout << "Now HP . " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (hitPoints <= 0 || energyPoints <= 0)
    {
        std::cout << name << " is dead and can't be repaired!" << std::endl;
        return;
    }
    
    hitPoints += amount;
    energyPoints--;
    std::cout << name << " is repaired by " << amount << " hit points!" << std::endl;
    std::cout << "Now HP . " << hitPoints << "New energyn . " << energyPoints << std::endl;
}

// getter et setter

int ClapTrap::get_attackDamage() const 
{
    return(attackDamage);
}

int ClapTrap::get_energyPoints() const 
{
    return (energyPoints);
}

int ClapTrap::get_hitPoints() const 
{
    return (hitPoints);
}

std::string ClapTrap::getname() const
{
    return (name);
}
