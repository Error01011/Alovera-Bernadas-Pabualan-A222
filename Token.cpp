#include "Token.h"

//constructor - definition
Token::Token(std::string word, WordType type)
{
	Token::type = type;
	Token::word = word;
}
//constructor - definition
std::string Token::getWord() {
	return Token::word;
}
//constructor - definition
WordType Token::getType() {
	return Token::type;
}