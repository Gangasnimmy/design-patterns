#include "logger.h"

Logger::Logger(){

    std::cout<<"Logger instance created"<<std::endl;

}

Logger::~Logger(){
    std::cout<<"Logger instance destroyed"<<std::endl;

}

Logger& Logger::getInstance(){
    static Logger instance;
    return instance;
}

void Logger::log(const std::string& msg){
    std::lock_guard<std::mutex> lock(m_log);
    std::cout<<msg<<std::endl;

}

void Logger::logToFile(const std::string& msg, const std::string& filename){
    std::lock_guard<std::mutex> lock(m_log);
    std::ofstream file(filename,std::ios_base::app);
    if(file.is_open()){
        file << "[Log] " << msg << std::endl;
    }
}