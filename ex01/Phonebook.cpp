/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 19:22:24 by vicmarti          #+#    #+#             */
/*   Updated: 2021/12/23 21:48:48 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"

#define STR std::string
Phonebook::Phonebook(void)
{
	std::cout << "Welcome to this crappy phone agenda app!" << std::endl
		<< "You can only have 8 contacts. As if you needed more." << std::endl
		<< "Keep a minimalist social life! Keep programming!" << std::endl;
	contact_num = 0;
}

Phonebook::~Phonebook(void){}

void	Phonebook::show_full(Contact c) const
{
	c.show_first_name();
	std::cout << "|";
	c.show_last_name();
	std::cout << "|";
	c.show_nick();
	std::cout << "|";
	c.show_phone();
	std::cout << "|";
	c.show_secret();
	std::cout << std::endl;
}

void	Phonebook::add_contact(Contact c)
{
	if (this->contact_num < 8)
		this->contact_list[this->contact_num++] = c;
	else
	{
		for (int i = 1; i < this->contact_num ; i++)
			contact_list[i - 1] = contact_list[i];
		this->contact_list[this->contact_num - 1] = c;
	}
}

void	Phonebook::show_contacts(void) const
{
	Contact	c;

	for (int i = 0; i < this->contact_num; i++)
	{
		c = contact_list[i];
		std::cout << "       " << i  << "|";
		c.show_first_name();
		std::cout << "|";
		c.show_last_name();
		std::cout << "|";
		c.show_nick();
		std::cout << std::endl;
	}
}

void	Phonebook::search_contact(int i) const
{
	if (i >= 0 && i < this->contact_num)
		show_full(contact_list[i]);
}
#undef STR
