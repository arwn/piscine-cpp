#include "Pony.hpp"

int main() {
	Pony p;
	Pony::ponyOnTheHeap();
	std::cout << std::endl;
	Pony::ponyOnTheStack();
}
