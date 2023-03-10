/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorcery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:03:54 by clorcery          #+#    #+#             */
/*   Updated: 2023/02/07 11:22:30 by clorcery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	_tabLevel[0] = "DEBUG";
	_tabLevel[1] = "INFO";
	_tabLevel[2] = "WARNING";
	_tabLevel[3] = "ERROR";
	level_ptr[0] = &Harl::debug;
	level_ptr[1] = &Harl::info;
	level_ptr[2] = &Harl::warning;
	level_ptr[3] = &Harl::error;
}

void Harl::complain(std::string level)
{
	if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")
	{
		std::cout << "this level doesn't exist." << std::endl; 
		return ;
	}
	for(int i = 0; i < 4 ; i++)
	{
		if (_tabLevel[i].compare(level) == 0)
		{
			(this->*level_ptr[i])(); 
			break ;
		}
	}
}

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void Harl::info( void )
{	
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

Harl::~Harl()
{

}
