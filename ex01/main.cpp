/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahlao <achahlao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 14:43:04 by achahlao          #+#    #+#             */
/*   Updated: 2025/04/28 02:09:34 by achahlao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    
    ScavTrap scav("Guardian");

    scav.attack("Enemy");
    scav.guardGate();

    return 0;
}