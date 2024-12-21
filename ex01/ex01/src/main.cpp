
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	ph;
	str command;
	
	while(1)
	{
		if (std::cin.eof() == true)
			{
				std::cout << "\033[33mYou Pressed ^D. Exiting phonebook now.\033[0m" << std::endl;
				break;
			}
		ph.showMenu();
		std::cin>> command;
		if (command.compare("ADD") == 0)
			ph.add();
		else if (command.compare("SEARCH") == 0)
			ph.search();
		else if (command.compare("EXIT") == 0)
		{
			std::cout << "\033[33mExiting phonebook now.\033[0m" << std::endl;
			break;
		}
		else
			std::cout << "\033[31m\nInvalid command!! Please choose from MENU\033[0m"<<std::endl;
			
	}
 	return (0);
}
