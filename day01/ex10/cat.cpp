#include <iostream>
#include <fstream>

void cat(std::istream& in) {
	std::cout << in.rdbuf();
}

int main(int argc, char *argv[]) {
	if (argc > 1) {
		for (int i = 1; i < argc; i++) {
			std::ifstream ifile(argv[i]);
			if (ifile) {
				cat(ifile);
			} else {
				std::cout << "File not found: " << argv[i] << std::endl;
			}
		}
	} else {
		cat (std::cin);
	}
}
