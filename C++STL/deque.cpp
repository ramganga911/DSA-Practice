#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for (int i:d)
    {
        cout << i << " ";
    }cout << endl;

    // d.pop_back();

    // for (int i:d)
    // {
    //     cout << i << " ";
    // }cout << endl;

    cout << "Element at 1st Index -> " <<d.at(1) << endl;

    cout << "First element ->" <<d.front() << endl;
    cout << "last element ->" <<d.back() << endl;
    cout << "Empty or Not ->" <<d.empty() << endl;

    cout << "Before erase ->" <<d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "After erase -> " << d.size() << endl;

    for (int i:d)
    {
        cout << i << " ";
    }cout << endl;


    
    return 0;
}