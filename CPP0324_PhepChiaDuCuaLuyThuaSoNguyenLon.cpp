#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll findModBigNum(string a, ll m){
	ll r = 0;
	for (int i = 0; i < a.size(); i++){
		r = r*10 + (a[i] - '0');
		r %= m;
	}
	return r;
}

ll binPowMod(ll a, ll b, ll m){
	a %= m;
	ll res = 1;
	while (b != 0){
		if (b % 2 == 1){
			res *= a;
			res %= m;
		}
		b /= 2;
		a *= a;
		a %= m;
	}
	return res;
}

void solve(string a, ll b, ll m){
	ll res = findModBigNum(a, m);
	res = binPowMod(res, b, m);
	cout << res << endl;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		string a;
		ll b, m;
		cin >> a >> b >> m;
		solve(a, b, m);
	}
}
