#include "Logger.hpp"
#include <string>
#include <iostream>
#include <fstream>

// private

void Logger::logToConsole(const std::string &s) {
	std::cerr << s << std::endl;
}

void Logger::logToFile(const std::string &s) {
	*fos << s;
}


std::string Logger::makeLogEntry(const std::string &s) {
	time_t t;
	time(&t);
	tm *tms = localtime(&t);
	//std::cout << "[" << tms->tm_year + 1900;
	//std::cout << std::setw(2) << std::setfill('0') << tms->tm_mon + 1;
	//std::cout << std::setw(2) << std::setfill('0') << tms->tm_mday;
	//std::cout << "_" << std::setw(2) << std::setfill('0') << tms->tm_hour;
	//std::cout << std::setw(2) << std::setfill('0') << tms->tm_min;
	//std::cout << std::setw(2) << std::setfill('0') << tms->tm_sec << "] ";

	return std::to_string(tms->tm_hour) + std::to_string(tms->tm_mday) + " ";
}

// public

Logger::Logger(void) {
	fileName = "outfile";
	fos = new std::ofstream(fileName);
}

Logger::Logger(std::string fname) {
	fileName = fname;
}

Logger::~Logger(void) {
	delete fos;
}

void Logger::log(std::string const &dest, std::string const &message) {
	std::string huh[2] = {
		"console",
		"file"
	};
	void(Logger::*verb[2])(const std::string&) = {
		&Logger::logToConsole,
		&Logger::logToFile
	};
	for (int i = 0; i < 3; i++) {
		if (dest == huh[i]) {
			(this->*verb[i])(message);
			return;
		}
	}
}

