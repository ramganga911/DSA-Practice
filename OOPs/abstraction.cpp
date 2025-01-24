#include <bits/stdc++.h>
using namespace std;
// pure virtual function and abstract class
class SmartPhone
{
public:
    virtual void TakeSelfie() = 0;
    virtual void makeCall()=0;
};
class Android : public SmartPhone
{
public:
    void TakeSelfie()
    {
        cout << "Android takes selfie" << endl;
    }
    void makeCall(){
        cout << "Android makes call" << endl;
    }
};
class Iphone : public SmartPhone
{
public:
    void TakeSelfie()
    {
        cout << "Iphone takes selfie" << endl;
    }
    void makeCall(){
        cout << "Iphone makes call" << endl;
    }
};
int main()
{
    SmartPhone *s1 = new Android();
    s1->TakeSelfie();
    s1->makeCall();
    SmartPhone *s2 = new Iphone();
    s2->TakeSelfie();
    s2->makeCall();
    return 0;
}