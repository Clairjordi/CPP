/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorcery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:57:08 by clorcery          #+#    #+#             */
/*   Updated: 2023/03/11 12:54:19 by clorcery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void display(T const & elem)
{
	std::cout << elem << std::endl;
}

template <typename T>
void iter(T *tab, int size, void (*display)(T const &))
{
	for (int i = 0; i < size; i++)
		display(tab[i]);
}

#endif
