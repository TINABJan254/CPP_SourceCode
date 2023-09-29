#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve(string n, ll m){
	ll k = 0;
	for (int i = 0; i < n.size(); i++){
		k = k*10 + (n[i] - '0');
		k %= m;
	}
	cout << k << endl;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		string n;
		ll m;
		cin >> n >> m;
		solve(n, m);
	}
}
