#ifndef _TOKEN_HPP_
#define _TOKEN_HPP_

#include <iostream>
#include <map>
#include <sstream>

enum TOKEN_TYPE {
    TK_IDENTIFIER,

    TK_STRING,
    TK_NUMBER,
    TK_NEWLINE,
    TK_IDENT,
    TK_COMMENT,

    // tokens for keywords
    TK_AND,
    TK_DEL,
    TK_FROM,
    TK_NOT,
    TK_WHILE,
    TK_AS,
    TK_ELIF,
    TK_GLOBAL,
    TK_OR,
    TK_WITH,
    TK_ASSERT,
    TK_ELSE,
    TK_IF,
    TK_PASS,
    TK_YIELD,
    TK_BREAK,
    TK_EXCEPT,
    TK_IMPORT,
    TK_PRINT,
    TK_CLASS,
    TK_EXEC,
    TK_IN,
    TK_RAISE,
    TK_CONTINUE,
    TK_FINALLY,
    TK_IS,
    TK_RETURN,
    TK_DEF,
    TK_FOR,
    TK_LAMBDA,
    TK_TRY,

    // Tokens for operators
    TK_SUM,
    TK_SUM_SUM,
    TK_SUB,
    TK_SUB_SUB,
    TK_MUL,
    TK_MUL_MUL,
    TK_DIV,
    TK_DIV_DIV,
    TK_PERC,
    TK_GG,
    TK_LL,
    TK_E,
    TK_L,
    TK_Z,
    TK_IGUAL,
    TK_DIFF,
    TK_LOWER,
    TK_GREATER,
    TK_GREATER_EQUAL,
    TK_LOWER_EQUAL,

    // Tokens for delemiters
    TK_OPEN_PARENTESI,
    TK_CLOSE_PARENTESI,
    TK_OPEN_BRACKET,
    TK_CLOSE_BRACKET,
    TK_OPEN_KEY,
    TK_CLOSE_KEY,
    TK_ARROBA,
    TK_COMA,
    TK_TWO_DOTS,
    TK_DOT,
    TK_DELM,
    TK_ATTR,
    TK_SEMICON,
    TK_PLUS_IGUAL,
    TK_MINUS_IGUAL,
    TK_MUL_IGUAL,
    TK_DIV_IGUAL,
    TK_DIV_DIV_IGUAL,
    TK_PERC_IGUAL,
    TK_E_IGUAL,
    TK_L_IGUAL,
    TK_Z_IGUAL,
    TK_GG_IGUAL,
    TK_LL_IGUAL,
    TK_MM_IGUAL
};

struct TokenList {
    char word[20];
    TOKEN_TYPE token;
};

struct TokenList Keywords[] = {
    {"and", TK_AND},
    { "del", TK_DEL },
    { "from", TK_FROM },
    { "not", TK_NOT },
    { "while", TK_WHILE },
    { "as", TK_AS },
    { "elif", TK_ELIF },
    { "global", TK_GLOBAL },
    { "or", TK_OR },
    { "with", TK_WITH },
    { "assert", TK_ASSERT },
    { "else", TK_ELSE },
    { "if", TK_IF },
    { "pass", TK_PASS },
    { "yield", TK_YIELD },
    { "break", TK_BREAK },
    { "except", TK_EXCEPT },
    { "import", TK_IMPORT },
    { "print", TK_PRINT },
    { "class", TK_CLASS },
    { "exec", TK_EXEC },
    { "in", TK_IN },
    { "raise", TK_RAISE },
    { "continue", TK_CONTINUE },
    { "finally", TK_FINALLY },
    { "is", TK_IS },
    { "return", TK_RETURN },
    { "def", TK_DEF },
    { "for", TK_FOR },
    { "lambda", TK_LAMBDA },
    { "try", TK_TRY },
};

struct TokenList Operators[] = {
    { "+", TK_SUM },
    { "++", TK_SUM_SUM },
    { "-", TK_SUB },
    { "--", TK_SUB_SUB },
    { "*", TK_MUL },
    { "**", TK_MUL_MUL },
    { "/", TK_DIV },
    { "//", TK_DIV_DIV },
    { "%", TK_PERC },
    { "<<", TK_GG },
    { ">>", TK_LL },
    { "&", TK_E },
    { "|", TK_L },
    { "^", TK_Z },
    { "~", TK_DIFF },
    { "<", TK_LOWER },
    { ">", TK_GREATER },
    { "<=", TK_LOWER_EQUAL },
    { ">=", TK_GREATER_EQUAL },
    { "==", TK_IGUAL },
    { "!=", TK_DIFF },
    { "<>", TK_DIFF },
};

struct TokenList Delimiters[] = {
    { "(", TK_OPEN_PARENTESI },
    { ")", TK_CLOSE_PARENTESI },
    { "[", TK_OPEN_BRACKET },
    { "]", TK_CLOSE_BRACKET },
    { "{", TK_OPEN_KEY },
    { "}", TK_CLOSE_KEY },
    { "@", TK_ARROBA },
    { ",", TK_COMA },
    { ":", TK_TWO_DOTS },
    { ".", TK_DOT },
    { "`", TK_DELM },
    { "=", TK_ATTR },
    { ";", TK_SEMICON },
    { "+=", TK_PLUS_IGUAL },
    { "-=", TK_MINUS_IGUAL },
    { "*=", TK_MUL_IGUAL },
    { "/=", TK_DIV_IGUAL },
    { "//=", TK_DIV_DIV_IGUAL },
    { "%=", TK_PERC_IGUAL },
    { "&=", TK_E_IGUAL },
    { "|=", TK_L_IGUAL },
    { "^=", TK_Z_IGUAL },
    { ">>=", TK_GG_IGUAL },
    { "<<=", TK_LL_IGUAL },
    { "**=", TK_MM_IGUAL },
};

#endif