#include "logger.h"
#include <thread>
#include <vector>

#define MAX_THREAD 5

void worker_thread(int threadId){
    Logger& logger = Logger::getInstance();
    logger.log("Thread " + std::to_string(threadId) + " is working");
    logger.logToFile("Thread " + std::to_string(threadId) + " is logged to the file", "app.log");
}

int main(){

    Logger& l1 = Logger::getInstance();
    Logger& l2 = Logger::getInstance();

    if(&l1 == &l2){
        std::cout<<"Both reference are same"<<std::endl;
    }

    std::vector<std::thread> threads;

    for(int i=0;i<MAX_THREAD;i++){
        threads.emplace_back(worker_thread,i);
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    for(std::thread& t : threads)
        t.join();

    return 0;
}