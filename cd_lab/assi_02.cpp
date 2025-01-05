#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

unordered_map<string, string> keywords = {
    {"auto", "AUTO"},
    {"break", "BREAK"},
    {"case", "CASE"},
    {"char", "CHAR"},
    {"const", "CONST"},
    {"continue", "CONTINUE"},
    {"default", "DEFAULT"},
    {"do", "DO"},
    {"double", "DOUBLE"},
    {"else", "ELSE"},
    {"enum", "ENUM"},
    {"extern", "EXTERN"},
    {"float", "FLOAT"},
    {"for", "FOR"},
    {"goto", "GOTO"},
    {"if", "IF"},
    {"int", "INT"},
    {"long", "LONG"},
    {"register", "REGISTER"},
    {"return", "RETURN"},
    {"short", "SHORT"},
    {"signed", "SIGNED"},
    {"sizeof", "SIZEOF"},
    {"static", "STATIC"},
    {"struct", "STRUCT"},
    {"switch", "SWITCH"},
    {"typedef", "TYPEDEF"},
    {"union", "UNION"},
    {"unsigned", "UNSIGNED"},
    {"void", "VOID"},
    {"volatile", "VOLATILE"},
    {"while", "WHILE"}
};

bool isKeyword(const string &token) {
    return keywords.find(token) != keywords.end();
}

int main() {
    string input;

    cout << "Enter C/C++ code: ";
    getline(cin, input);

    string token;
    size_t startPos = 0;
    size_t endPos = 0;

    while (endPos != string::npos) {
        endPos = input.find_first_of(" \t\n(){}[];,+-*/<>=&|!", startPos);

        if (endPos == string::npos) {
            token = input.substr(startPos);
        } else {
            token = input.substr(startPos, endPos - startPos);
        }

        if (!token.empty()) {
            if (isKeyword(token)) {
                cout << "Token: " << token << " (Keyword)" << endl;
            } else {
                cout << "Token: " << token << " (Identifier)" << endl;
            }
        }

        startPos = endPos + 1;
    }

    return 0;
}
