#pragma once
#include <iostream>
#include "WordType.cpp"

//Token Header
//Header files are used for declarations. You can still declare
//it under 1 file (.cpp). It is just used for coding conventions etc.
// "Header files allow us to put declarations in one place and then import them wherever we need them. 
// This can save a lot of typing in multi-file program" ~ Google
class Token
{
private:
	//WordType - refer to WordType class file
	WordType type;
	//string - string haha
	std::string word;

public:
	//constructor - like in java
	Token(std::string word, WordType type);
	//getter
	std::string getWord();
	//getter
	WordType getType();
};
