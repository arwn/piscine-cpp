#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <string>

class Logger
{
  private:
	void logToConsole(const std::string &s);
	void logToFile(const std::string &s);
	std::string makeLogEntry(const std::string &s);
	std::string fileName;
	std::ofstream *fos;
  public:
	Logger(void);
	Logger(std::string fname);
	~Logger(void);
	void log(std::string const &dest, std::string const &message);
};

#endif
