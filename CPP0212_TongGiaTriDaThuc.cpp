#include <bits/stdc++.h>

using namespace std;
#define ll long long
int mod = 1e9+7;

ll powMod(ll a, ll b){
	ll res = 1;
	while (b != 0){
		if (b % 2 == 1){
			res *= 1ll*a;
			res %= mod;
		}
		b /= 2;
		a *= a;
		a %= mod;
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, x;
		cin >> n >> x;
		int a[n+5];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		ll p = 0;
		for (int i = 0; i < n; i++){
			p += 1ll*a[i]*powMod(1ll*x,1ll*(n-i-1));
			p %= mod;
		}
		cout << p << endl;
	}
	
}
