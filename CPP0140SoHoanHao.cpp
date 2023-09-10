#include<bits/stdc++.h>

using namespace std;

#define ll long long

bool Solve(){
    ll n;
    cin >> n;
    if (n > (ll) 1e12) return 0;
    ll Sum = 1;
    double sqr = sqrt(n);
    for(int i = 2; i < sqr; i++)
    {
        if(n % i == 0)
        {
            Sum += i;
            Sum += n / i;
        }
    }
    sqr = (int) sqr;
    if(sqr * sqr == n) Sum += sqr;
    return Sum == n;
}

int main(){
    int t;
    cin >> t;
    while(t--) cout << Solve() << endl;
    return 0;
}
