#include<iostream>
using namespace std;
class rectangle{
    private:
    int length;
    int breath;
    
    public:
    void setLength(int len){
        length = len;
    }
    void setBreath(int bre){
        breath = bre;
    }
    int getLength(){
        return length;
    }
    int getBreath(){
        return breath;
    }
    int getArea(){
        return length*breath;
    }

};
int main(){
    rectangle rect;
    rect.setLength(3);
    rect.setBreath(5);

    cout<<"Length = " << rect.getLength()<<endl;
    cout<<"Breath = " << rect.getBreath()<<endl;
    cout<<"Area = " << rect.getArea()<<endl;

    return 0;
}