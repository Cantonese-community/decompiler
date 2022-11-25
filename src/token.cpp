#include <string>
#include "token.hpp"

using namespace std;

class Token {
    TOKEN_TYPE type;
    string value;
    int line;
    int column;

    public:
        Token(TOKEN_TYPE, string, int, int);
        void dump();
        int getType();
        string getValue();
};

Token::Token(TOKEN_TYPE type, string value, int line, int column) {
    this->type = type;
    this->value = value;
    this->line = line;
    this->column = column;
}

void Token::dump() {
    printf("Token (Type: %d, Char: '%s', Line: %d, Column: %d)\n", this->type, this->value.c_str(), this->line, this->column);
}

int Token::getType() {
    return this->type;
}

string Token::getValue() {
    return this->value;
}