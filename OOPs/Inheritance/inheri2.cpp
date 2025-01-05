#include<iostream>
using namespace std;
class person {
    char name[100];
    int id;
    public:
    void set_p();
    void display_p();
};
void person ::set_p(){
    fflush(stdin);
    cout << "Enter Your Name : " <<endl;
    cin.get(name,100);
    cout << "Enter Your id : " <<endl;
    cin >> id; 
}
void person::display_p(){
    cout << "Name : " << name << endl << "ID : " << id << endl;
}
class student:private person{
    char course[30];
    int fee;
    public:
    void set_s();
    void display_s();
};
void student::set_s(){
    set_p();
    fflush(stdin);
    cout << "Enter Course Name : " << endl;
    cin.get(course,30);
    cout << "Enter Your Fee : " << endl;
    cin >> fee;
}
void student::display_s(){
    cout << endl << "..........Display Details.........."<< endl;
    display_p();
    cout << "Your Course Name : " << course <<endl <<"Your Fee : "<< fee << endl;
}

int main(){
    student s;
    s.set_s();
    s.display_s();
    return 0;
}