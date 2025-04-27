/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahlao <achahlao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 14:43:01 by achahlao          #+#    #+#             */
/*   Updated: 2025/04/27 17:39:38 by achahlao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(), hitPoints(100), energyPoints(50), attackDamage(20) {
    std::cout << "ScavTrap Default Constructor is called" << std::endl;
}

