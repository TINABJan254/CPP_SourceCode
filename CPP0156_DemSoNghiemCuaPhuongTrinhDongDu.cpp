#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll solve(ll n, ll p)
{
    ll ans = 0;
    for(ll x = 1; x < p; ++x)
    {
        if((x * x) % p == 1)
        {
            ll tmp = x + p * (n / p);
            if (tmp > n) tmp -= p;
            ans += ((tmp - x) / p + 1);
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll b, p;
        cin >> b >> p;
        cout << solve(b, p) << endl;
    }
    return 0;
}