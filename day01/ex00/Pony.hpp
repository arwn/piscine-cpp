#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class Pony {
  public:
	static void ponyOnTheHeap(void);
	static void ponyOnTheStack(void);
  private:
	Pony(void);
	int girth;
	int weight;
	int length;
	int volume;
};

#endif
