/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahlao <achahlao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:46:00 by achahlao          #+#    #+#             */
/*   Updated: 2025/04/27 11:50:07 by achahlao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>
#include "ClapTrap.hpp"

int main() {
    ClapTrap r("tt");
    ClapTrap robot("Chahlaoui");

    robot.attack("r");
    robot.takeDamage(12);  
    robot.beRepaired(7);         
    robot.takeDamage(10);        
    robot.attack("Another Enemy");
    return 0;
}