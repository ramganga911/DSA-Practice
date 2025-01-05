#include<iostream>
using namespace std;

int firstOccur(int arr[], int size, int key){
    int s = 0, e = size - 1;
    int ans = -1;
    int mid = s + (e - s)/2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s)/2;    
    }

    return ans;
}
int lastOccur(int arr[], int size, int key){
    int s = 0, e = size - 1;
    int ans = -1;
    int mid = s + (e - s)/2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s)/2;    
    }

    return ans;
}

int main(){
    int even[6] = {1, 2, 3, 3, 3, 4};

    cout << " first occurrence of 3 is at index " << firstOccur(even,6,3) << endl;

    cout << " last occurrence of 3 is at index  " << lastOccur(even,6,3) << endl;

    cout << "Total number of occurrence " << (lastOccur(even,6,3)- firstOccur(even,6,3)) +1 << endl;

    return 0;
}