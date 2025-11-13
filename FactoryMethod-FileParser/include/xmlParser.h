#ifndef XMLPARSER_H
#define XMLPARSER_H
#include "parser.h"

class xmlParser : public parser {
    public:
        virtual ~xmlParser() = default;
        void parse(const std::string& filename) override;
};

#endif