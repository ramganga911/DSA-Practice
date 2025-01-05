#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Library{
    public:
    int id;
    char name[20];
    char auther[20];
    char student[20];
    int price;
    int pages;
};
int main(){
    Library lib[20];
    int input = 0;
    int count = 0;

    while (input != 3)
    {
        cout << "Enter 1 to input details like id, name, auther,student,price,pages"<<endl;
        cout << "Enter 2 to Display Details"<<endl;
        cout << "Enter 3 to Exit"<<endl;
        cin >>input;

        switch (input)
        {
        case 1:
            start:
            cout <<"Enter BOOK id "<<endl;
            cin >>lib[count].id;
            
            cout <<"Enter Book Name "<<endl;
            cin >>lib[count].name;
            
            cout <<"Enter auther name "<<endl;
            cin >>lib[count].auther;
            
            cout <<"Enter Student Name "<<endl;
            cin >>lib[count].student;
        
            cout <<"Enter Price "<<endl;
            cin >>lib[count].price;
            
            cout <<"Enter Page no "<<endl;
            cin >>lib[count].pages;
            count++;
            break;

            case 2:
                for (int i = 0; i < count; i++)
                {
                    cout <<"Book id : " <<lib[i].id <<endl;
                    cout <<"Book Name : " <<lib[i].name <<endl;
                    cout <<"Book auther : " <<lib[i].auther <<endl;
                    cout <<"Student Name : " <<lib[i].student <<endl;
                    cout <<"Book Price : " <<lib[i].price <<endl;
                    cout <<"Book pages : " <<lib[i].pages <<endl;

                }
                
            break;
            case 3:
                exit(0);
            break;
        
        default:
            cout <<"U have enter wrong value , please try again leater" <<endl;
            goto start;
        }
    }
    
}