#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {
	// check args
	if (argc != 4) {
		std::cout << "usage: ./replace file s1 s2" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (filename.empty() || s1.empty() || s2.empty()) {
		std::cout << "usage: ./replace file s1 s2" << std::endl;
		return (1);
	}

	std::ifstream fis(filename);
	std::string content((std::istreambuf_iterator<char>(fis)),
		std::istreambuf_iterator<char>());
	for (int i = 0; i < (int)content.size(); i++) {
		if (content.compare(i, s1.length(), s1) == 0) {
			content.replace(i, s1.length(), s2);
			i += s2.length() - 1;
		}
	}
	filename.append(".replace");
	std::ofstream fos(filename);
	fos << content;
	return (3);
}
