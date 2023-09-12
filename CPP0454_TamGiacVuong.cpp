#include <bits/stdc++.h>

using namespace std;
#define ll long long

bool check(ll a[], int n, vector<ll> v){
	for (int i = 0; i < n; i++)
		for (int j = i+1; j < n; j++)
			if (binary_search(begin(v), end(v), a[i]*a[i] + a[j]*a[j]))
				return true;
	return false;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		ll a[n];
		vector<ll> v;
		for (int i = 0; i < n; i++){
			cin >> a[i];
			v.push_back(a[i]*a[i]);
		}
		sort(begin(v), end(v));
		if (check(a, n, v))
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}
}
