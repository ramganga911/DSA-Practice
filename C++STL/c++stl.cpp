#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "abcde";
    string t = "cdeab";

    cout << (s.length() == t.length() && (s + s).find(t) != string::npos) << endl;

    string line = "Hello world, this is MIK";

    transform(begin(line), end(line), begin(line), ::tolower);

    cout << line << endl;

    transform(begin(line), end(line), begin(line), ::toupper);

    cout << line << endl;

    return 0;
}