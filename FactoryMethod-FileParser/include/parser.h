#ifndef PARSER_H
#define PARSER_H
#include <string>

class parser {
    public:
        virtual ~parser() = default;
        void virtual parse(const std::string& filename) = 0;
};

#endif