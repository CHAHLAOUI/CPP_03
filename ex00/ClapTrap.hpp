/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahlao <achahlao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:45:57 by achahlao          #+#    #+#             */
/*   Updated: 2025/04/27 14:40:21 by achahlao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
private:
    std::string          name;
    unsigned int         hitPoints;
    unsigned int         energyPoints;
    unsigned int         attackDamage;

public:
    ClapTrap() ;
    ClapTrap(const std::string& _name);
    ClapTrap(const ClapTrap& obj);
	ClapTrap& operator=(const ClapTrap& obj);
    ~ClapTrap() ;
    
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    

    std::string  getname() const;
    unsigned int get_hitPoints() const ;
    unsigned int get_energyPoints() const;
    unsigned int get_attackDamage() const ;
};

# endif