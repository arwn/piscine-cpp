#include <iostream>

void memoryLeak(void)
{
	std::string* panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
	while (1);
}

//int main(void)
//{
//	memoryLeak();
//	while(1);
//}
