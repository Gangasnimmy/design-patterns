#ifndef JSONPARSER_H
#define JSONPARSER_H
#include <parser.h>

class jsonParser : public parser {
    public:
        virtual ~jsonParser() = default;
        void parse(const std::string& filename) override;
};

#endif