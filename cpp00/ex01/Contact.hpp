/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorcery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:47:28 by clorcery          #+#    #+#             */
/*   Updated: 2023/01/22 16:36:31 by clorcery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip> 
# include <string>
#include <cstdlib>

class Contact
{
	public:
		Contact(); //constructeur
		~Contact(); //destructeur
	
		//declarations des methodes ou fonctions membres
		void add_contact();
		void display_line_phonebook();
		void display_info_contact();
		int	 phonenumber_is_valid();
		std::string short_cut_data(std::string data);
	private:
		//declaration des attributs ou variables membres
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string	_phonenumber;
		std::string _secret;
};


#endif
