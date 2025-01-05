#include <bits/stdc++.h>
using namespace std;
// bool myCom(pair<int,int> a, pair<int,int> b)
// {
//     if(a.first == b.first){
//         return a.second>b.second;
//     }
//     return a.first > b.first;
// }

// Using function Object (functors)
// class myCom{
//     public:
//         auto operator()(pair<int, int> a, pair<int, int> b)
//         {
//             if(a.first == b.first){
//                 return a.second >b.second;
//             }
//             return a.first>b.first;
//         }
// };

// Using Lamda Expression

auto lamda = [](pair<int, int> a, pair<int, int> b) {
                if(a.first == b.first){
                    return a.second>b.second;
                }
                return a.first > b.first;
};

void print(vector<pair<int, int>> &vec){
    for(auto &p: vec){
        cout<< p.first<<","<<p.second<<":";
    }cout<<endl;
}
// void print(vector<int> &vec)
// {
//     for (auto &x : vec)
//     {
//         cout << x << " ";
//     }
//     cout << endl;
// }
int main()
{
    // vector<int> vec = {1, 3, 6, 8, 3, 9};
    vector<pair<int,int>> vec ={{2,3},{2,4},{4,5}};
    sort(vec.begin(), vec.end(), lamda);
    print(vec);
    return 0;
}