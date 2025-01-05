#include <bits/stdc++.h>
using namespace std;
// class heap{
//     public:
//         int arr[100];
//         int size;
//         heap(){
//             arr[0]=-1;
//             size =0;
//         }
//         void insert(int val){
//             size = size+1;
//             int index = size;
//             arr[index] = val;

//             while(index>1){
//                 int parent = index/2;
//                 if(arr[parent]< arr[index]){
//                     swap(arr[parent], arr[index]);
//                     index = parent;
//                 }else{
//                     return ;
//                 }
//             }
//         }
//         void print(){
//             for(int i=1; i<=size; i++){
//                 cout << arr[i] <<" ";
//             }cout<<endl;
//         }
// };

void heapify(int arr[], int index, int n)
{
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }
    if (largest != index)
    {
        swap(arr[largest], arr[index]);
        heapify(arr, largest, n);
    }
}

void buildMaxHeap(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, i, n);
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[10] = {10, 3, 8, 9, 5, 13, 18, 14, 11, 70};
    buildMaxHeap(arr, 10);
    print(arr, 10);
    // heap h;
    // h.insert(50);
    // h.insert(55);
    // h.insert(45);
    // h.insert(42);
    // h.insert(53);
    // h.print();
    return 0;
}
