/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorcery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:44:18 by clorcery          #+#    #+#             */
/*   Updated: 2023/02/25 18:31:28 by clorcery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/* Constructor and Destructor */
RobotomyRequestForm::RobotomyRequestForm(void) : Form()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& toCopy) : Form(toCopy)
{
	*this = toCopy;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

/* Member Function */
void RobotomyRequestForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _signedGrade)
		_signedForm = true;
	else 
		throw GradeTooLowException();
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (_signedForm == true && executor.getGrade() <= _executeGrade)
	{
		std::cout << executor.getName() << " executed "<< _name << std::endl;
		std::cout << "rrrrrrr...rrrrrrrr" << std::endl;
		std::cout << _target << " has been successfully robotized 50\% of the time" << std::endl;
	}
	else
		throw GradeTooLowException();
}

/* Operator */
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& toCopy)
{
	if (this != &toCopy)
	{
		_target = toCopy._target;
		_signedForm = toCopy._signedForm;
	}
	return *this;
}

