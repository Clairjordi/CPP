/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorcery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 10:44:28 by clorcery          #+#    #+#             */
/*   Updated: 2023/02/06 18:37:36 by clorcery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie 
{
	public:
		Zombie();
		~Zombie();
		void setName(std::string name);
		void announce(void);

	private:
		std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
