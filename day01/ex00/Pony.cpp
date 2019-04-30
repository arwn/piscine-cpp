#include "Pony.hpp"

Pony::Pony(void) {
	girth = 0;
	weight = 0;
	length = 0;
	volume = 0;
}

void Pony::ponyOnTheHeap(void) {
	Pony p;
	std::cout << &p << std::endl;

	std::cout << "a heap pony is born" << std::endl;
	p.girth = 8;
	p.weight = 1042;
	p.length = 24;
	p.volume = 12;
	std::cout << "pony stats after a year:" << std::endl;
	std::cout << p.girth << " "
		<< p.weight << " " << p.length << " "
		<< p.volume << " " << std::endl;
	std::cout << &p << std::endl;
}

void Pony::ponyOnTheStack(void) {
	Pony *p = new Pony;
	std::cout << p << std::endl;

	std::cout << "a stack pony is born" << std::endl;
	p->girth = 8;
	p->weight = 1042;
	p->length = 24;
	p->volume = 12;
	std::cout << "pony stats after a year:" << std::endl;
	std::cout << p->girth << " "
		<< p->weight << " " << p->length << " "
		<< p->volume << " " << std::endl;
	delete p;
	std::cout << p << std::endl;
}
