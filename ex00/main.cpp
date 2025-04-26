/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahlao <achahlao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:46:00 by achahlao          #+#    #+#             */
/*   Updated: 2025/04/26 11:53:33 by achahlao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {

	ClapTrap clap("Clap");

	
	clap.attack("Enemy");
	clap.takeDamage(3);
	clap.beRepaired(5);  
	clap.takeDamage(12);
	clap.beRepaired(3);


	return 0;
}
