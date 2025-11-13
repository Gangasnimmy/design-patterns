#include "parserFactory.h"
#include <iostream>
using namespace std;

extern std::unique_ptr<parserFactory> getFactoryForFile(const string& filename);

int main(){
    string files[] = {"data/config.json","data/log.xml"};
    
    for(auto& file : files){
        auto factory = getFactoryForFile(file);
        if(factory){
            auto parser = factory->createParser();
            parser->parse(file);
        } else {
            cout<< "No parser available for file "<<file<<endl;
        }
        
    }
    return 0;
}