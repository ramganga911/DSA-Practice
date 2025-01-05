#include<iostream>
using namespace std;

bool search(int arr[], int n, int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    } 
    return 0;
}








int main(){

    int arr[10] = {5 ,7, 4, 10, 3, 8, 9, 2, 10, 12};
    cout << "Enter the key " << endl;
    int key;
    cin>> key;
    bool found = search(arr,10,key);

    if (found)
    {
        cout << "find" << endl;
    }
    else{
        cout << "not found"<< endl;
    }
    
 
    return 0;
}