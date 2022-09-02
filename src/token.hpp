#ifndef _TOKEN_HPP_
#define _TOKEN_HPP_

#include <iostream>
#include <map>
#include <sstream>

namespace token {
    enum Kind {
        NUM,
        IDENT,
        STR,
        CHAR,
        FLOAT,

        ADD,
        SUB,
        MUL,
        DIV,
        SUR,

        _EOF
    };

    struct Token {
        Kind kind = _EOF;
        std::string literal;
        int line;
    };

    static std::string toString(const Token &token) {
        std::stringstream str;
        // TODO
        return str.str();
    }
};

#endif