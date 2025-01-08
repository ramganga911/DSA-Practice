#include<bits/stdc++.h>
using namespace std;
class Vehicle{
public:
    int topSpeed;
    string fuel;
    int mileage;
};
class Car : public Vehicle{
    public:
    bool sunroof;
};
class Bike : public Vehicle{
    public:
    bool discBrake;

}
class electricBike : public Bike,Car{//multiple inheritance
    public:
    int batteryCapacity;
}
int main(){
    
    return 0;
}