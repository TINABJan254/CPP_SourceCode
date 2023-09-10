#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
//	ios_base::sync_with_stdio(0); 
//	cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		map<ll, int> mp;
		for (int i = 0; i < n; i++){
			ll x;
			cin >> x;
			mp[x]++;
		}
		for (ll i = 0; i < n; i++){
			if (mp[i] >= 1){
				cout << i << " ";
			}
			else
				cout << "-1 ";
		}
		cout << endl;
	}
}
