/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 22:05:47 by vicmarti          #+#    #+#             */
/*   Updated: 2021/12/23 20:09:13 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# define STR std::string
class Contact
{
public:
	Contact(void);
	Contact(STR fn, STR ln, STR nn, STR phone, STR ds);
	~Contact(void);
	void	set_first_name(STR s);
	void	set_last_name(STR s);
	void	set_nick(STR s);
	void	set_phone(STR s);
	void	set_secret(STR s);
	void	show_first_name(void) const;
	void	show_last_name(void) const;
	void	show_nick(void) const;
	void	show_phone(void) const;
	void	show_secret(void) const;
private:
	STR	first_name;
	STR	last_name;
	STR	nick;
	STR	phone;
	STR	secret;

	void	show_field(STR field) const;
};
# undef STR
#endif
