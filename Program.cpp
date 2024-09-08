#include <iostream>
#include <string>
#include "Tokenizer.h"
int main()
{
    
    string text;
    cout << "Enter input: ";
    getline(cin, text);
    Tokenizer token(text);
    cout << "Phase 1 Output:\n";
    for (Token tok : token.tokens) {
        cout << "Token: \"" << ((tok.getWord()=="\n") ? "\\n" : tok.getWord()) << "\" - Type: ";
        switch (tok.getType()) {
        case WORD:
            cout << "Word" << endl;
            break;
        case PUNCT:
            cout << "Punctuation" << endl;
            break;
        case NUM:
            cout << "Number" << endl;
            break;
        case ENDL:
            cout << "End of Line" << endl;
            break;
        case ALPHANUM:
            cout << "Alphanumeric" << endl;
            break;
       }
    }
    cout << "====================================================\n";
    cout << "Phase 2 Output (Granular Brakedown):\n";
    for (Token tok : token.tokens) {
        string token = tok.getWord();
        if (token.length() == 1) continue;
        cout << "Token: \"" << token << "\" -> ";
        for (int i = 0; i < token.length(); i++) {
            cout << "'" << tok.getWord()[i];
            if (i != token.length() - 1) cout << "', ";
        }
        cout << "'\n";
    }
    return 0;
}

