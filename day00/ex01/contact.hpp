#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>

class contact
{
	public:
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickname();
	std::string	getLogin();
	std::string	getPostalAddress();
	std::string	getEmailAddress();
	std::string	getPhoneNumber();
	std::string	getBirthdayDate();
	std::string	getFavoriteMeal();
	std::string	getUnderwearColor();
	std::string	getDarkestSecret();
	void		setFirstName(std::string str);
	void		setLastName(std::string str);
	void		setNickname(std::string str);
	void		setLogin(std::string str);
	void		setPostalAddress(std::string str);
	void		setEmailAddress(std::string str);
	void		setPhoneNumber(std::string str);
	void		setBirthdayDate(std::string str);
	void		setFavoriteMeal(std::string str);
	void		setUnderwearColor(std::string str);
	void		setDarkestSecret(std::string str);

	private:
	std::string	firstName;
	std::string	lastName;
	std::string nickname;
	std::string login;
	std::string postalAddress;
	std::string emailAddress;
	std::string phoneNumber;
	std::string birthdayDate;
	std::string favoriteMeal;
	std::string underwearColor;
	std::string darkestSecret;
};

#endif
