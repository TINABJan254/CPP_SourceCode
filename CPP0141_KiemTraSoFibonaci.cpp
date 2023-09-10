#include <bits/stdc++.h>

using namespace std;
#define ll long long

bool check_fb(ll n){
	if (n < 2)
		return true;
	ll a = 0, b = 1, c = 0;
	while (c < n){
		c = a+b;
		a = b;
		b = c;
		if (c == n)
			return true;
	}
	return false;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		ll n;
		cin >> n;
		if (check_fb(n))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
