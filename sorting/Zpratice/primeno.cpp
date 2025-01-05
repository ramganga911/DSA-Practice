#include<bits/stdc++.h>
using namespace std;
// bool isPrime(int n){
//     if(n ==1){
//         return false;
//     }
//     for(int i=2; i*i<=n; i++){
//         if(n%i == 0){
//             return false;
//         }
//     }
//     return true;
// }
vector<bool> sieve(int n){
    vector<bool> primes(n+1,true);
    primes[0]=primes[1] = false;

    for(int i=2; i*i<=n; i++){
        if(primes[i]){
            for(int j=i*i; j<=n; j+=i){
                primes[j] = false;
            }
        }
    }
    return primes;
}
int main(){
    int n = 50;
    vector<bool> primes = sieve(n);
    for(int i=1; i<=n; i++){
        if(primes[i]){
            cout << i<< " ";
        }
    }
    return 0;
}