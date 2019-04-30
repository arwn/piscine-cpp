#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "contact.hpp"
#include <iostream>
#include <iomanip>

class phoneBook
{
	public:
		phoneBook();
		void search();
		void add();
	private:
		void formatString(std::string str);

		contact				data[8];
		static const int	strLimit = 10;
		int					size;
};

#endif
