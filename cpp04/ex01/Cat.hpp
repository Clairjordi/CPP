/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorcery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:19:15 by clorcery          #+#    #+#             */
/*   Updated: 2023/02/13 17:27:40 by clorcery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Brain.hpp"
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat & toCopy);
		Cat & operator=(const Cat & toCopy);
		virtual ~Cat();

		virtual void makeSound() const;

	private:
		Brain* _brain;
};

#endif
