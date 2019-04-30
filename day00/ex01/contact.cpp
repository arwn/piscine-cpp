#include "contact.hpp"

std::string	contact::getFirstName()
{
	return firstName;
}
std::string	contact::getLastName()
{
	return lastName;
}

std::string	contact::getNickname()
{
	return nickname;
}

std::string	contact::getLogin()
{
	return login;
}

std::string	contact::getPostalAddress()
{
	return postalAddress;
}

std::string	contact::getEmailAddress()
{
	return emailAddress;
}

std::string	contact::getPhoneNumber()
{
	return phoneNumber;
}

std::string	contact::getBirthdayDate()
{
	return birthdayDate;
}

std::string	contact::getFavoriteMeal()
{
	return favoriteMeal;
}

std::string	contact::getUnderwearColor()
{
	return underwearColor;
}

std::string	contact::getDarkestSecret()
{
	return darkestSecret;
}

void		contact::setFirstName(std::string str)
{
	firstName = str;
}

void		contact::setLastName(std::string str)
{
	lastName = str;
}

void		contact::setNickname(std::string str)
{
	nickname = str;
}

void		contact::setLogin(std::string str)
{
	login = str;
}

void		contact::setPostalAddress(std::string str)
{
	postalAddress = str;
}

void		contact::setEmailAddress(std::string str)
{
	emailAddress = str;
}

void		contact::setPhoneNumber(std::string str)
{
	phoneNumber = str;
}

void		contact::setBirthdayDate(std::string str)
{
	birthdayDate = str;
}

void		contact::setFavoriteMeal(std::string str)
{
	favoriteMeal = str;
}

void		contact::setUnderwearColor(std::string str)
{
	underwearColor = str;
}

void		contact::setDarkestSecret(std::string str)
{
	darkestSecret = str;
}
