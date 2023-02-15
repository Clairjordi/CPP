/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorcery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:19:10 by clorcery          #+#    #+#             */
/*   Updated: 2023/02/15 19:10:03 by clorcery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* Constructor and Destructor */
Character::Character(void)
{
}

Character::Character(std::string name) : _name(name)
{
}

Character::Character(const Character& toCopy)
{
	*this = toCopy;
}

Character::~Character(void)
{
}

/* Member Function */
std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria *m)
{
	int i;
	for (i = 0; i < 4; i++)
	{
		if (_items[i] == NULL)
			break ;
	}
	if (i > 3)
		return ;
	_items[i] = m;
}

void Character::unequip(int idx)
{
	if ((idx >= 0 && idx < 4) && _items[idx] != NULL)
		_items[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if ((idx >= 0 && idx < 4) && _items[idx] != NULL)
	{
		_items[idx]->use(target);
	}
}

/* Operator */
Character& Character::operator=(const Character& toCopy)
{
	if (this != &toCopy)
	{
		_name = toCopy._name;
		for (int i = 0; i < 4; i++)
			delete this->_items[i];
		for (int i = 0; i < 4; i++)
			*_items[i] = *toCopy._items[i]->clone();
	}
	return *this;
}
