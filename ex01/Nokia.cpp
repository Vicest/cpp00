/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Nokia.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 18:49:46 by vicmarti          #+#    #+#             */
/*   Updated: 2021/12/23 21:48:02 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <limits>
#include "Contact.hpp"
#include "Phonebook.hpp"

static Contact	contact_from_input(void)
{
	std::string	input[5];
	Contact		new_contact;

	std::cout << "Contact info required." << std::endl
		<< "First name,Second name, Nick, Phone, Secret." << std::endl;
	std::cin >> input[0] >> input[1] >> input[2] >> input[3] >> input[4];
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	new_contact = Contact(input[0], input[1], input[2], input[3], input[4]);
	return (new_contact);
}

static int	get_id(void)
{
	int	id;

	id = -1;
	std::cout << "Select ID:";
	std::cin >> id;
	if (std::cin.fail() || isalnum(std::cin.peek()))
	{
		std::cout << "That makes no sense." << std::endl;
		std::cin.clear();
		id = -1;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return (id);
}

int	main(void)
{
	std::string	instruction;
	Phonebook	nokia = Phonebook();
	Contact		aux;
	int			id;

	std::cin >> instruction;
	while (!std::cin.eof() && instruction.compare("EXIT") != 0)
	{
		if (instruction.compare("ADD") == 0)
		{
			aux = contact_from_input();
			nokia.add_contact(aux);
		}
		else if (instruction.compare("SEARCH") == 0)
		{
			nokia.show_contacts();
			id = get_id();
			if (!std::cin.eof() && id != -1)
				nokia.search_contact(id);
		}
		else
			std::cout << "*CONFUSED SCREAMING*" << std::endl;
		std::cin >> instruction;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	return (95);
}
