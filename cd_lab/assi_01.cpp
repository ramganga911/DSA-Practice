#include <iostream>
#include <string>

using namespace std;

enum State { START, X, M, Y, ACCEPT, REJECT };

State transition(State currentState, char input) {
    switch (currentState) {
        case START:
            if (input == 'x') return X;
            else return REJECT;
        case X:
            if (input == 'x') return X;
            else if (input == 'm') return M;
            else return REJECT;
        case M:
            if (input == 'm') return M;
            else if (input == 'y') return Y;
            else return REJECT;
        case Y:
            if (input == 'y') return Y;
            else if (input == '\0') return ACCEPT;
            else return REJECT;
        default:
            return REJECT;
    }
}

bool isAccepted(string input) {
    State currentState = START;
    for (char c : input) {
        currentState = transition(currentState, c);
    }
    return currentState == ACCEPT;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    if (isAccepted(input)) {
        cout << "Accepted" << endl;
    } else {
        cout << "Rejected" << endl;
    }
    return 0;
}

