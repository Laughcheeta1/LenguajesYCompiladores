#ifndef PARSER_H
#define PARSER_H
#include "ast.h"

class Parser
{
    private:


    public:
        static std::string evaluateTree(NodeAST* head);
};

#endif