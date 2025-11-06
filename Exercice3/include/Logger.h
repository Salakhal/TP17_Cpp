#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <iostream>

class Logger {
private:
    static Logger* instance;
    Logger() {}  // constructeur privé pour Singleton

public:
    static Logger* getInstance();
    void log(const std::string& message);
};

#endif
