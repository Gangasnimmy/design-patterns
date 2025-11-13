#ifndef PARSERFACTORY_H
#define PARSERFACTORY_H

#include "parser.h"
#include "xmlParser.h"
#include "jsonParser.h"
#include <memory>

class parserFactory{
    public:
        virtual ~parserFactory() = default;
        virtual std::unique_ptr<parser> createParser() = 0;
};

class jsonParserFactory : public parserFactory {
    public:
        std::unique_ptr<parser> createParser() override {
            return std::make_unique<jsonParser>();
        }    
};

class xmlParserFactory : public parserFactory {
    public:
        std::unique_ptr<parser> createParser() override {
            return std::make_unique<xmlParser>();
        }    
};

#endif