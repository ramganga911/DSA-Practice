#include<iostream>
using namespace std;

// void update(int *p){
//     *p = *p +1;
// }
  
    int getsum(int *arr, int n){
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        return sum;
    }

int main(){
    // int i = 5;
    // int *ptr = 0;
    // ptr = &i;
    // cout << i <<endl;
    // cout <<&i <<endl;
    // cout <<*ptr <<endl;
    // cout <<ptr <<endl;
    // cout << "size of i is "<<sizeof(i)<<endl;
    // cout << "size of ptr is "<<sizeof(ptr)<<endl;
    // cout << "Ptr "<<(*ptr)++ << endl;
    // int *q = ptr;
    // cout << ptr << "-"<<q <<endl;
    // cout << *ptr << "-"<<*q <<endl;


    // int arr[10] = {1,2,3,4,5};
    // cout <<"addres of first block "<<arr <<endl;
    // cout <<"addres of first block "<<&arr[0] <<endl;
    // cout <<"first block "<<*arr <<endl;
    // //arr[i] = *(arr+i)
    // //i[arr] = *(i+arr)
    // int i = 3;
    // cout <<i[arr] <<endl;

    // int temp[10] = {1,2,3,4};
    // cout << sizeof(temp)<<endl;
    // int *ptr = &temp[0];
    // cout << sizeof(ptr)<<endl;
    // cout << sizeof(*ptr)<<endl;
    // cout << sizeof(&ptr)<<endl;

    // int arr[10];

    // int *ptr = &arr[0];
    // cout << ptr <<endl;
    // ptr = ptr+1;
    // cout << ptr <<endl;

    // int arr[10] = {1,2,3,4,5};
    // char ch[6] = "abcde";
    // cout << arr <<endl;
    // cout << ch <<endl;
    // char *c = &ch[0];
    // cout << c <<endl;
    // int val = 5;
    // int *p =&val;
    // cout << *p <<endl;
    // update(p);
    // cout <<*p <<endl;
    int arr[6] = {1,2,3,4,5,6};

    cout <<"Sum is " <<getsum(arr,6);

    return 0;
} 