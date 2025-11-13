#include "parserFactory.h"
//#include <string>

std::unique_ptr<parserFactory> getFactoryForFile(const std::string& filename){
    auto extPos = filename.find_last_of('.');
    if(extPos == std::string::npos)
        return nullptr;
    std::string ext = filename.substr(extPos+1);
    if(ext == "json")
        return std::make_unique<jsonParserFactory>();
    else if(ext == "xml")
        return std::make_unique<xmlParserFactory>();

    return nullptr;
}


