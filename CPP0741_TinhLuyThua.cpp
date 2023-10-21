#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll binPowMod(ll x, ll y, ll p){
    ll res = 1;
    x %= p;
    while (y != 0){
        if (y % 2 != 0){
            res *= x;
            res %= p;
        }
        x *= x;
        x %= p;
        y /= 2;
    }
    return res;
}

void solveTC(){
    ll x, y, p;
    cin >> x >> y >> p;
    cout << binPowMod(x, y, p) << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solveTC();
    }
}