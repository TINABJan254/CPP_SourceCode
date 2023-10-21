#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll MOD = 1e9 + 7;
ll fibo[1000];


void Init(){
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i <= 1000; i++){
        fibo[i] = ( (fibo[i-1] % MOD) + (fibo[i-2] % MOD) ) % MOD;
    }
}

void solveTC(){
    int n;
    cin >> n;
    cout << fibo[n] << endl;
}

int main(){
    Init();
    int t;
    cin >> t;
    while (t--){
        solveTC();
    }
}