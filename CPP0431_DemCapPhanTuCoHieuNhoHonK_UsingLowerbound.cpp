//su dung lowerbound, thay vi tim vi tri cuoi cung cua phan tu <= x, ta tim phan tu dau tien > x
#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, k;
		cin >> n >> k;
		int a[n+5];
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		ll res = 0;
		for (int i = 0; i < n-1; i++){
			auto it = lower_bound(a, a+n, a[i]+k);
			int pos = it - a - 1;
			res += pos-i;
		}
		cout << res << endl;
	}
}
