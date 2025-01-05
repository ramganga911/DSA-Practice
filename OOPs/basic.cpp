#include<iostream>
using namespace std;
class Hero{
    public:
    //properties
    int health;
    char Level;
    Hero(){
        cout << "Constructor Called.... " << endl;
    }
    //parameterised constructor
    Hero(int health){
        cout <<"this -> "<< this <<endl;
       this->health = health; 
    }
    int getHealth(){
        return health;
    }
    char getLevel(){
        return Level;
    }
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        Level = ch;
    }
};
int main(){
    // //Object created staticaly 
    // Hero ram(90);
    // cout<< "Address of ram is : " << &ram <<endl;
    // //Object created dynamically
    // Hero*ganga = new Hero();
    //static allocation
   /* Hero ram;
    ram.setHealth(70);
    ram.setLevel('A');
    cout << "health is : "<< ram.getHealth()<<endl;
    cout << "level is : "<< ram.getLevel()<<endl;

    //dynamic allocation
    Hero *ganga = new Hero;
    ganga->setHealth(80);
    ganga->setLevel('B');
    cout << "health is : "<< (*ganga).getHealth()<<endl;
    cout << "level is : "<< (*ganga).getLevel()<<endl;

    // ram.health = 70;
    // ram.Level = 'A'; 
    // cout << "health is : " << ram.health << endl;
    // cout << "Level is : " << ram.Level << endl;
    cout << "Size : "<< sizeof(ram) << endl;*/
    return 0;
}