#include <bits/stdc++.h>
using namespace std;
class Scooter
{
public:
    int topSpeed;
    int mileage;
    virtual void sound()
    {
        cout << "Vroom Vroom" << endl;
    }
};
class Bike : public Scooter
{
public:
    int gear;
    void sound()
    {
        cout << "Dhroom Dhroom" << endl;
    }
};
int main()
{
    Scooter *s = new Bike();
    Bike *b = new Bike();
    s->sound();
    b->sound();
    return 0;
}