#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n], b[n];
		for (int i = 0; i < n; i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b+n);
		for (int i = 0; i < n; i++){
			auto it = upper_bound(b, b+n, a[i]);
			int pos = it - b;
			if (pos < n){
				cout << *it << ' ';
			}
			else
				cout << "_ ";
		}
		cout << endl;
	}
}
