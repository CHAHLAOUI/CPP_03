/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahlao <achahlao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:45:52 by achahlao          #+#    #+#             */
/*   Updated: 2025/04/29 03:14:09 by achahlao         ###   ########.fr       */
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

ClapTrap::ClapTrap(const ClapTrap& obj)
:   name(obj.getname()) ,
    hitPoints(obj.get_hitPoints()),
    energyPoints(obj.get_energyPoints()) ,
    attackDamage(obj.get_attackDamage())
{
    std::cout << "ClapTrap " << name << " Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
    std::cout << "ClapTrap" << name << "Copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        name    =       obj.getname();
        hitPoints =     obj.get_hitPoints();
        energyPoints =  obj.get_energyPoints();
        attackDamage =  obj.get_attackDamage();
    }
    return (*this);
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

unsigned int ClapTrap::get_attackDamage() const 
{
    return(attackDamage);
}

unsigned int ClapTrap::get_energyPoints() const 
{
    return (energyPoints);
}

unsigned int ClapTrap::get_hitPoints() const 
{
    return (hitPoints);
}

std::string ClapTrap::getname() const
{
    return (name);
}
