#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_index = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::showMenu()
{
	std::cout<<"\n\t";
	std::cout << "\033[34mPHONEBOOK MENU" << std::endl;
	std::cout << "\t--------------" << std::endl;
	std::cout << "\tCommands " << std::endl;
	std::cout << "\t* ADD\n";
	std::cout << "\t* SEARCH\n";
	std::cout << "\t* EXIT\n";
	std::cout << "\n\tChoose one command :\033[0m ";
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
	str header[4] = {"Index", "First Name", "Last Name", "Nick Name"};
	for (int i = 0; i < 45; i++)
		std::cout << "\033[34m-";
	std::cout << "\n";
	for (int i = 0; i < 4; i++)
	{
		std::cout << "|";
		if (header[i].length() <= 10)
			std::cout << std::setw(10)<<header[i];
		else
		std::cout<<header[i].substr(0,9)<<'.';
	}
	std::cout << "|\n";
	for (int i = 0; i < 45; i++)
		std::cout << "-";
	std::cout << "\n";
}

void PhoneBook::printContactInfo(int index)
{
	std::cout << "|" << std::setw(10) << index--;
	if (this->_contacts[index].getFirstName().length() <= 10)
		std::cout << "|" << std::setw(10) << this->_contacts[index].getFirstName();
	else
		std::cout << "|" <<  this->_contacts[index].getFirstName().substr(0,
				9) << '.';
	if (this->_contacts[index].getLastName().length() <= 10)
		std::cout << "|" << std::setw(10) << this->_contacts[index].getLastName();
	else
		std::cout << "|" << this->_contacts[index].getLastName().substr(0,
				9) << '.';
	if (this->_contacts[index].getNickName().length() <= 10)
		std::cout << "|" << std::setw(10) << this->_contacts[index].getNickName();
	else
		std::cout << "|" << this->_contacts[index].getNickName().substr(0,
				9) << '.';
	std::cout << "|\n";
}

void PhoneBook::search(void)
{
	str	index;
	int	cnt;

    if(_index == 0)
	{
		std::cout<<"\033[31mPhoneBook is empty. Please ADD contacts to view.\n\033[0m";
		return;
	}
	while(1){
		std::cout << "\n\033[33mEnter the contact number to view (Press 0 to exit SEARCH mode):\033[0m";
		getline(std::cin >> std::ws, index);
		if(index.compare("0")==0 || std::cin.eof()==true)
		   {
			std::cout << "\n\033[34mExiting SEARCH mode\n\033[0m";
			break;
		   }
		if (index.length() > 1 )
		{
		std::cout << "\033[31m\n Invalid Index. ";
		if(_index < 8)
			std::cout << "PhoneBook has only "<<_index <<" contact(s) stored"<<std::endl;
		else
			std::cout<< "PhoneBook has only 8 contacts stored."<<std::endl;
		}
		else
		{
		cnt = index[0] - '0';
		if (cnt > 0 && cnt <= 8 && cnt <= _index)
		{
			this->displayHeader();
			this->printContactInfo(cnt);
			for (int i = 0; i < 45; i++)
					std::cout << "-";
			std::cout << std::endl;
		}
		else
		{
			std::cout<<"\033[31mIndex out of range. ";
		  if(_index < 8)
			std::cout << "PhoneBook has only "<<_index <<" contact(s) stored."<<std::endl;
		 else
			std::cout<< "PhoneBook has only 8 contacts stored. \033[0m"<<std::endl;
		}
		
	}
	}	
}
