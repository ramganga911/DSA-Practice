#include<bits/stdc++.h>
using namespace std;
class gfg{
    //print 1 to 10 without loop
    public:
    void printNos(unsigned int n){
        if(n>0){
            printNos(n-1);
            cout<< n << " ";
        }
        return ;
    }
};
int main(){
    gfg g;
    g.printNos(50);
    return 0;
}