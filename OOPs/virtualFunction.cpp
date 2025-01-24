#include<bits/stdc++.h>
using namespace std;
// virtual function implementation && pure virtual function and abstract class
class Instrument{
    public:
    // virtual void makeSound(){
    //     cout << "Instrument makes sound" << endl;
    // }
    virtual void makeSound()=0;
    
};
class Guitar : public Instrument{
    public:
    void makeSound(){
        cout << "Guitar makes sound" << endl;
    }
};
class Piano : public Instrument{
    public:
    void makeSound(){
        cout << "Piano makes sound" << endl;
    }
};
int main(){
    Instrument* i1 = new Guitar();
    // i1->makeSound();
    Instrument *i2 = new Piano();
    // i2->makeSound();
    Instrument *instrument[2] = {i1,i2};
    for(int i=0; i<2; i++){
        instrument[i]->makeSound();
    }
    return 0;
}