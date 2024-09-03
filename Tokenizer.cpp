#include "Tokenizer.h"

Tokenizer::Tokenizer(string str) {
    string token = "";
    WordType currentType = WORD;

    for (int i = 0; i < str.length(); i++) {
        char c = str[i];

        if (isAlpha(c)) {
            currentType = (token.empty() || currentType == WORD ) ? WORD : ALPHANUM;
            token += c;
        }
        else if (isDigit(c)) {
            currentType = (token.empty() || currentType == NUM ) ? NUM : ALPHANUM;
            token += c;
        }
        else if (c != delimiter) {  
            if (!token.empty()) { 
                if (i != 0 && i != str.length() - 1 && c=='.') {
                    if (isDigit(str[i - 1]) && isDigit(str[i + 1])) {
                        currentType = (token.empty() || currentType == NUM) ? NUM : ALPHANUM;
                        token += c;
                        continue;
                    }
                }
                tokens.push_back(Token(token, currentType));
                token = "";
            }
            if(c=='\n')tokens.push_back(Token(string(1, c), ENDL));
            else tokens.push_back(Token(string(1, c), PUNCT)); 
            continue;
        }
        else {  
            if (!token.empty()) {
                tokens.push_back(Token(token, currentType));
                token = "";
            }
            currentType = WORD; 
        }
    }
    if (!token.empty()) {
        tokens.push_back(Token(token, currentType));
    }
    tokens.push_back(Token("\n", ENDL));
}

bool Tokenizer::isAlpha(char c) {
	return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

bool Tokenizer::isDigit(char d) {
	return (d >= '0' && d <= '9');
}
