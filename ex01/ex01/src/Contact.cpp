/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 11:59:02 by emilin            #+#    #+#             */
/*   Updated: 2024/12/16 14:35:41 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	_firstName = "";
	_lastName = "";
	_nickName = "";
	_phone = "";
	_secret = "";
}

Contact::~Contact()
{
}

void Contact::setFirstName(str fName)
{
	this->_firstName = fName;
}

void Contact::setLastName(str lName)
{
	this->_lastName = lName;
}

void Contact::setNickName(str nName)
{
	this->_nickName = nName;
}

void Contact::setPhone(str phone)
{
	this->_phone = phone;
}

void Contact::setSecret(str secret)
{
	this->_secret = secret;
}

str Contact::getFirstName(void) const
{
	return (this->_firstName);
}

str Contact::getLastName(void) const
{
	return (this->_lastName);
}

str Contact::getNickName(void) const
{
	return (this->_nickName);
}

str Contact::getPhoneNumber(void) const
{
	return (this->_phone);
}

str Contact::getSecret(void) const
{
	return (this->_secret);
}
