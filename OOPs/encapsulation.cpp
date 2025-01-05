#include<iostream>
using namespace std;


class encapsulation {
    private:
    int x;
    public:
    void set(int a){
        x = a;
    }
    int get(){
        return x;
    }
};

int main(){
    encapsulation o;
    o.set(5);
    cout << o.get();
    return 0;
}