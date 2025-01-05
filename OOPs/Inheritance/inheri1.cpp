#include<iostream>
using namespace std;
class person {
    char name[100];
    int id;
    public:
    void set_p(){
        fflush(stdin);
        cout << "Enter name  " << endl;
        cin.get(name,100);
        cout << "Enter id  " <<endl;
        cin >> id;
    }
    void display_p(){
        cout <<"Name : "<< name << endl <<"ID : "<< id << endl;

    }
};
class student : public person{
        char course[50];
        int fee;
        public:
    void set_s(){
        set_p();
        fflush(stdin);
        cout << "Enter course name : " << endl;
        cin.get(course,50);
        cout << "Enter fee : " << endl;
        cin >> fee;
    }
    
    void display_s(){
        cout << endl << "..........Display Details.........."<< endl;
        display_p();
        cout <<"Course :"<< course << endl <<"Fee :"<< fee << endl;
    }
    };

int main(){
    student s;
    s.set_s();
    s.display_s();
    return 0;
}