#include "phoneBook.hpp"

phoneBook::phoneBook()
{
	size = 0;
}

void	phoneBook::formatString(std::string str)
{
	if (str.size() > strLimit)
	{
		std::cout << str.substr(0, strLimit - 1) << ".";
	}
	else
	{
		std::cout << std::setw(10) << str;
	}
}

void	phoneBook::search()
{
	formatString("index");
	std::cout << "|";
	formatString("first name");
	std::cout << "|";
	formatString("last name");
	std::cout << "|";
	formatString("nickname");
	std::cout << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << "         " << i;
		std::cout << "|";
		formatString(data[i].getFirstName());
		std::cout << "|";
		formatString(data[i].getLastName());
		std::cout << "|";
		formatString(data[i].getNickname());
		std::cout << std::endl;
	}
	std::string input;
	std::cout << "enter index to search: ";
	getline(std::cin, input);
	if (input.size() > 1)
	{
		std::cout << "it seems like it's invalid.." << std::endl;
		return ;
	}
	int idx = input[0] - '0';
	if (idx < 0 || idx >= size)
	{
		std::cout << "it seems like it's invalid.." << std::endl;
		return ;
	}
	std::cout << "         " << idx;
	std::cout << "|";
	formatString(data[idx].getFirstName());
	std::cout << "|";
	formatString(data[idx].getLastName());
	std::cout << "|";
	formatString(data[idx].getNickname());
	std::cout << std::endl;
	std::cout << "first name: "<< data[idx].getFirstName() << std::endl;
	std::cout << "last name: "<< data[idx].getLastName() << std::endl;
	std::cout << "nickname: "<< data[idx].getNickname() << std::endl;
	std::cout << "login: "<< data[idx].getLogin() << std::endl;
	std::cout << "postal address: "<< data[idx].getPostalAddress() << std::endl;
	std::cout << "email address: "<< data[idx].getEmailAddress() << std::endl;
	std::cout << "phone number: "<< data[idx].getPhoneNumber() << std::endl;
	std::cout << "birthday date: "<< data[idx].getBirthdayDate() << std::endl;
	std::cout << "favorite meal: "<< data[idx].getFavoriteMeal() << std::endl;
	std::cout << "underwear color: "<< data[idx].getUnderwearColor() << std::endl;
	std::cout << "darkest secret: "<< data[idx].getDarkestSecret() << std::endl;
}

void	phoneBook::add()
{
	std::string str;
	if (size == 8)
	{
		std::cout << "out of spaces! sorry buddy." << std::endl;
		return ;
	}
	contact& val = data[size];
	std::cout << "enter first name: ";
	getline(std::cin, str);
	val.setFirstName(str);
	std::cout << "enter last name: ";
	getline(std::cin, str);
	val.setLastName(str);
	std::cout << "enter nickname: ";
	getline(std::cin, str);
	val.setNickname(str);
	std::cout << "enter login: ";
	getline(std::cin, str);
	val.setLogin(str);
	std::cout << "enter postal address: ";
	getline(std::cin, str);
	val.setPostalAddress(str);
	std::cout << "enter email address: ";
	getline(std::cin, str);
	val.setEmailAddress(str);
	std::cout << "enter phone number: ";
	getline(std::cin, str);
	val.setPhoneNumber(str);
	std::cout << "enter birthday date: ";
	getline(std::cin, str);
	val.setBirthdayDate(str);
	std::cout << "enter favorite meal: ";
	getline(std::cin, str);
	val.setFavoriteMeal(str);
	std::cout << "enter underwear color: ";
	getline(std::cin, str);
	val.setUnderwearColor(str);
	std::cout << "enter darkest secret: ";
	getline(std::cin, str);
	val.setDarkestSecret(str);
	size++;
	std::cout << "added!" << std::endl;
}
