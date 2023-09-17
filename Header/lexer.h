#ifndef LEXER_H
#define LEXER_H
#include "Token.h"
#include <vector>

class Lexer {
    private:
        Token token;
        std::string line;
        long size;
        long position;
        Token readNumber();
        Token readWords();
        std::string stripWhiteSpace(std::string line);
        std::vector<Token> processResult(std::vector<Token> vec);
        void processLog(std::vector<Token> vec);
        void processLn(std::vector<Token> vec);
        void processRaiz(std::vector<Token> vec);
        Token getToken(char currentChar);

    public:
        std::vector<Token> readLine(std::string in);
};
#endif