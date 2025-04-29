/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahlao <achahlao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 00:10:18 by achahlao          #+#    #+#             */
/*   Updated: 2025/04/29 00:11:19 by achahlao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    
    FragTrap Frag("Guardian");

    Frag.attack("Enemy");
    Frag.highFivesGuys();

    return 0;
}