/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 16:57:01 by vicmarti          #+#    #+#             */
/*   Updated: 2021/12/23 20:34:27 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

#define STR std::string
Contact::Contact(void) :
	first_name(""), last_name(""), nick(""), phone(""), secret(""){}

Contact::Contact(STR fn, STR ln, STR nn, STR phone, STR ds) :
	first_name(fn), last_name(ln), nick(nn), phone(phone), secret(ds)
{
	std::cout << "Contact created." << std::endl;
}

Contact::~Contact(void){}

void	Contact::show_field(STR field) const
{
	char	aux[11];

	aux[9] = '.';
	aux[10] = '\0';
	std::cout << std::setw(10);
	if (field.length() <= 10)
		std::cout << field;
	else
	{
		field.copy(aux, 9, 0);
		std::cout << aux;
	}
}

void	Contact::show_first_name(void) const
{
	show_field(this->first_name);
}

void	Contact::show_last_name(void) const
{
	show_field(this->last_name);
}

void	Contact::show_nick(void) const
{
	show_field(this->nick);
}

void	Contact::show_phone(void) const
{
	show_field(this->phone);
}

void	Contact::show_secret(void) const
{
	show_field(this->secret);
}

void	Contact::set_first_name(STR s)
{
	this->first_name = s;
}

void	Contact::set_last_name(STR s)
{
	this->last_name = s;
}

void	Contact::set_nick(STR s)
{
	this->nick = s;
}

void	Contact::set_phone(STR s)
{
	this->phone = s;
}

void	Contact::set_secret(STR s)
{
	this->secret = s;
}
#undef STR
