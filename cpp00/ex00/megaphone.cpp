/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorcery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:03:10 by clorcery          #+#    #+#             */
/*   Updated: 2023/01/19 14:23:13 by clorcery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	int size; 

	if (argc < 2)
	{
		std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl;
		return (1);
	}
	for(int i = 1; argv[i] ; i++)
	{
		std::string str(argv[i]);
		size = str.size();
		for(int j = 0 ; j < size ; j++)
			std::cout << (char)(std::toupper(str[j]));
	}
	std::cout << std::endl;
	return (0);
}
