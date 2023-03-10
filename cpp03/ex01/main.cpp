/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorcery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:00:03 by clorcery          #+#    #+#             */
/*   Updated: 2023/02/11 12:06:09 by clorcery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap bob("Boby");
	ClapTrap julie("Juju");
	ScavTrap robot("Wall·e");
	ScavTrap android("Erica");

	std::cout << std::endl;
	robot.attack(bob.getName());
	bob.takeDamage(robot.getAttackDamage());
	bob.beRepaired(10);

	std::cout << std::endl;
	bob.attack(julie.getName());
	julie.takeDamage(bob.getAttackDamage());
	julie.beRepaired(5);

	std::cout << std::endl;

	android.attack(robot.getName());
	robot.takeDamage(android.getAttackDamage());
	android.beRepaired(30);
	robot.guardGate();

	std::cout << std::endl;
	return 0;
}
