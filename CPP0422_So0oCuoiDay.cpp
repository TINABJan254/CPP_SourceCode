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
		ll a[n];
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		ll cnt = 0;
		for (int i = 0; i < n; i++){
			if (a[i] != 0){
				cout << a[i] << " ";
			}
			else ++cnt;
		}
		for (int i = 0; i < cnt; i++)	
			cout << "0 ";
		cout << endl;
	}
}
