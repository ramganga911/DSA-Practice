#include <bits/stdc++.h>
using namespace std;
class Vector
{
public:
    int *arr;
    int size;
    int capacity;
    Vector()
    {
        arr = new int[1];
        size = 0;
        capacity = 1;
    }
    void add(int ele)
    {
        if (size == capacity)
        {
            capacity *= 2;
            int *arr2 = new int[capacity];
            for (int i = 0; i < size; i++)
            {
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
        arr[size++] = ele;
    }
    void remove()
    {
        if (size < 0)
        {
            cout << "No element to remove" << endl;
        }

        if (size > 0)
        {
            size--;
        }
    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    int get(int idx)
    {
        if (idx >= size)
        {
            cout << "Index out of bound" << endl;
        }
        return arr[idx];
    }
};
int main()
{
    Vector v;
    v.add(10);
    v.add(20);
    v.print();
    v.add(30);
    v.print();
    v.get(2);
    v.remove();
    return 0;
}