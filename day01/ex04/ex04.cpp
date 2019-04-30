#include <iostream>
#include <string>

int main(void) {
	std::string brian = "HI THIS IS BRAIN";
	std::string* pbrian = &brian;
	std::string& rbrian = brian;

	std::cout << brian << " " << *pbrian << " " << rbrian <<  std::endl;
}
