#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_index = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add(void)
{
	int	recNo;

	str fname, lname, nick, phone, secret;
	if (_index < 8)
		recNo = _index;
	else
	{
		recNo = _index % 8;
		std::cout << "\033[33m\nOverwriting details for index " << recNo + 1
					<< " named : " << this->_contacts[recNo].getFirstName() << "\033[0m";
	}
	std::cout << "\nEnter first name: ";
	getline(std::cin >> std::ws, fname);
	std::cout << "\nEnter last name: ";
	getline(std::cin >> std::ws, lname);
	std::cout << "\nEnter nick name: ";
	getline(std::cin >> std::ws, nick);
	std::cout << "\nEnter phone number: ";
	getline(std::cin >> std::ws, phone);
	std::cout << "\nEnter darkest secret: ";
	getline(std::cin >> std::ws, secret);
	this->_contacts[recNo].setFirstName(fname);
	this->_contacts[recNo].setLastName(lname);
	this->_contacts[recNo].setNickName(nick);
	this->_contacts[recNo].setPhone(phone);
	this->_contacts[recNo].setSecret(secret);
	_index++;
}
void PhoneBook::displayHeader(void)
{
	std::cout << " ____________________________________________" << std::endl;
	std::cout
		<< "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
}

void PhoneBook::search(void)
{
	str	index;
	int	cnt;

	std::cout << "\nEnter the contact number to view  : ";
	getline(std::cin >> std::ws, index);
	if (index.length() > 1 || index.compare("0") == 0)
		std::cout << "\n Invalid Contact Number. Choose from 1 - 8.\n ";
	else
	{
		cnt = index[0] - '0';
		std::cout << "\n Index = " << cnt << std::endl;
		if (cnt > 0 && cnt < 8 && cnt <= _index)
		{
			this->displayHeader();
			std::cout << "|" << std::setw(10) << cnt--;
			std::cout << "|" << std::setw(10) << this->_contacts[cnt].getFirstName();
			std::cout << "|" << std::setw(10) << this->_contacts[cnt].getLastName();
			std::cout << "|" << std::setw(10) << this->_contacts[cnt].getNickName();
			std::cout << "|\n";
			std::cout << " -------------------------------------------" << std::endl;
		}
		else
			std::cout << "\n The selected index is out of range";
	}
}
