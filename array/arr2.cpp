#include<iostream>
using namespace std;
bool checkpelindrome(char a[],int n){
    int s = 0;
    int e = n-1;
    while (s<=e)
    {
        if (a[s]!= a[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
        
    }
    return 1;
}
void reverse(char name[],int n){
    int s= 0;
    int e = n-1;
    while (s<e)
    {
        swap(name[s++],name[e--]);
    }
    
}

int getlengh(char name[]){
    int count =0;
    for (int i = 0; i < name[i]!= '\0'; i++)
    {
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout << "Enter your name " << endl;
    cin>> name;
    cout << "Your name is " << name << " " <<endl;
    int len = getlengh(name);
    reverse(name,len);
    cout <<"your name is " << name <<endl;
    
    cout << checkpelindrome(name,len);
    return 0;
}