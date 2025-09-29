#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <string>
#include <fstream>
#include <mutex>

class Logger{

    private:

        Logger();

        ~Logger();

        std::mutex m_log;

    public:

        // static method to get the singleton instance
        static Logger& getInstance();

        // Deleted copy constructor and assignment operator to avoid cloning 
        Logger(const Logger&) = delete;
        void operator=(const Logger&) = delete;

        // logging methods
        void log(const std::string& msg);
        void logToFile(const std::string& msg, const std::string& filename);

};

#endif