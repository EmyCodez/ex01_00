
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	ph;

	for (int i = 0; i < 10; i++)
		ph.add();
	for (int i = 0; i < 6; i++)
		ph.search();
	return (0);
}
