#include "phoneBook.hpp"
#include <iostream>

int main()
{
	phoneBook	pb;
	std::string	command;
	std::cout << "enter command: ";
	getline(std::cin, command);
	while (command != "EXIT")
	{
		if (command == "ADD")
			pb.add();
		else if (command == "SEARCH")
			pb.search();
		std::cout << "enter command: ";
		getline(std::cin, command);
	}
}
