#include <bits/stdc++.h>

using namespace std;
#define ll long long

int lastPos(int a[], int begin, int n, int x){
	int L = begin, R = n-1;
	int res = -1;
	while (L <= R){
		int mid = (L+R)/2;
		if (a[mid] < x){
			res = mid;
			L = mid+1;
		}
		else
			R = mid - 1;
	}
	return res;
}

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
			int pos = lastPos(a, i+1, n, a[i]+k);
			if (pos != -1)
				res += pos-i;
		}
		cout << res << endl;
	}
}
