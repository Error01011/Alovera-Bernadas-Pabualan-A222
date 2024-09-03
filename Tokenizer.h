#pragma once
#include <iostream>
#include <vector>
#include "Token.h"
using namespace std;


class Tokenizer
{
private:
	bool isAlpha(char c);
	bool isDigit(char d);

public:
	const char delimiter = '?';
	vector<Token> tokens;
	Tokenizer(string str);

};
