#include <iostream>
#include <string>

class Parser {
private:
    std::string input;
    size_t index;
    char current_token;

    void getNextToken() {
        if (index < input.length()) {
            current_token = input[index++];
        } else {
            current_token = '\0';
        }
    }

    void match(char expected_token) {
        if (current_token == expected_token) {
            getNextToken();
        } else {
            throw std::runtime_error("Syntax error");
        }
    }

public:
    Parser(const std::string& input_string)
        : input(input_string), index(0), current_token('\0') {
            getNextToken(); // Initialize current_token
        }

    void S() {
        if (current_token == 'i') {
            match('i');
            match('d');
            match('=');
            T();
        } else {
            throw std::runtime_error("Syntax error");
        }
    }

    void T() {
        A();
        while (current_token == '-') {
            match('-');
            A();
        }
    }

    void A() {
        if (current_token == 'n') {
            match('n');
            match('u');
            match('m');
        } else {
            throw std::runtime_error("Syntax error");
        }
    }

    void parse() {
        S();
        if (current_token != '\0') {
            throw std::runtime_error("Syntax error");
        }
    }
};

int main() {
    std::string input = "id=num-num";
    Parser parser(input);
    try {
        parser.parse();
        std::cout << "Parsing successful!" << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Parsing failed: " << e.what() << std::endl;
    }
    return 0;
}