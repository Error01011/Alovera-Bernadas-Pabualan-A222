#pragma once
#include <iostream>
#include <vector>
#include "Token.h"
using namespace std;
//tokenizer, class used to store tokens :)
class Tokenizer
{
private:
	//checks if a single char is alpha
	bool isAlpha(char c);
	//checks if a single char is digit
	bool isDigit(char d);

public:
	//constant char delimiter is ?. constant means unchangeable
	const char delimiter = '?';
	//vector. same siya sa list in java. add, remove, push, search lng. 
	//dari ginaadd ang mga token with its type. like "Word" - Word, "1.1" - Num.
	//List of Token ni sya. Token ang datatype, which is a class na gihimo nako
	//check Token file
	vector<Token> tokens;
	//constructor, accepts 1 parameter, input ni siya na i-tokenize!
	Tokenizer(string str);

};
