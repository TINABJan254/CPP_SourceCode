//using prefix sum
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k, b;
	cin >> n >> k >> b;
	int a[n+5] = {0}, ps[n+5];
	for (int i = 0; i < b; i++){
		int x; cin >> x;
		a[x-1] = 1;
	}
	for (int i = 0; i < n; i++){
		if (i == 0)
			ps[i] = a[i];
		else
			ps[i] = a[i] + ps[i-1];
	}
	int ans = INT_MAX;
	for (int i = 0; i < n; i++){
		int pos = i+k-1;
		if (pos >= n)
			break;
		if (i == 0)
			ans = min(ans, ps[pos] - 0);
		else 
			ans = min(ans, ps[pos] - ps[i-1]);
	}
	cout << ans;
}
