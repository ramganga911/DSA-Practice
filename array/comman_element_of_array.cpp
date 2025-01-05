#include<iostream>
using namespace std;

int main(){
    int arr1[] = {1, 5, 7, 8, 9, 11};
    int arr2[] = {6, 8, 10, 11, 12, 16};
    int arr3[] = {1, 3, 5, 6, 8, 10, 11, 17};

    int s1 = sizeof(arr1)/sizeof(arr1[0]);
    int s2 = sizeof(arr2)/sizeof(arr2[0]);
    int s3 = sizeof(arr3)/sizeof(arr3[0]);

    cout << "Original arrays :" << endl;
    cout << "Arr1" << endl;
    for(int i = 0; i <s1; i++){
        cout << arr1[i] << " ";
    }cout << endl;
    cout << "Arr2" << endl;
    for(int i = 0; i <s2; i++){
        cout << arr2[i] << " ";
    }cout << endl;
    cout << "Arr3" << endl;
    for(int i = 0; i <s3; i++){
        cout << arr3[i] << " ";
    }cout << endl;

    cout << "Comman element of said sorted array is :" << endl;
    int i = 0, j = 0, k= 0;
    while(i < s1 && j < s2 && k < s3)
    {
        if(arr1[i] == arr2[j] && arr2[j] == arr3[k]){
            cout<< arr1[i] << " ";
            i++;
            j++;
            k++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr2[j] < arr3[k]){
            j++;
        }
        else{
            k++;
        }
        
    }

    return 0;
}