#include<iostream>
using namespace std;

bool checkelement(int arr[][4], int target,int r,int c){
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; i < 4; j++)
        {
            if (arr[i][j]==target)
            {
                return 1;
            }
            
        }
        
    }
    return 0;
    
}

int main(){
    int arr[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout <<endl;
    }

    cout << "Enter the element to search "<< endl;
    int target;
    cin >> target;
    if(checkelement(arr,2,3,4)){
        cout << "found" <<endl;
    }
    else{
        cout <<"not found";
    }
    
    return 0;
}