#include "Logger.hpp"

int main(void) {
	Logger l;
	l.log("file", "log to a file");
	l.log("console", "log to a console");
	l.log("file", "log to a ..file?");
	l.log("console", "WOW!!!");
}
