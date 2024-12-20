#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <iomanip>

class PhoneBook
{
  private:
	int _index;
	Contact _contacts[8];

  public:
	PhoneBook();
	~PhoneBook();
	void showMenu(void);
	void add(void);
	void search(void);
	void displayHeader(void);
	void printContactInfo(int index);
};

#endif
