#include<iostream>
#include<fstream>

using namespace std;

int main(){

    char c;
    ifstream i_file("ram.txt");
    ofstream o_file("new.txt");

    while(i_file.get(c)){
        o_file.put(c);
    }
    i_file.close();
    o_file.close();
    cout << "Data written succesfully";
    return 0;
}