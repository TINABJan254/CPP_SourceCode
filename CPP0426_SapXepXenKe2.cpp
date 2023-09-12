#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a+n, greater<int>());
		int L = 0, R = n-1;
		while (L <= R){
			if (L == R)
				cout << a[L] << ' ';
			else
				cout << a[L] << ' ' << a[R] << ' ';
			++L;
			--R;
		}
		cout << endl;
	}
}
