/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:02:09 by vicmarti          #+#    #+#             */
/*   Updated: 2021/12/23 21:48:27 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class Phonebook
{
public:
	Phonebook(void);
	~Phonebook(void);
	void	add_contact(Contact c);
	void	show_contacts(void) const;
	void	search_contact(int i) const;
private:
	int		contact_num;
	Contact	contact_list[8];

	void	show_full(Contact c) const;
};
#endif
