//using sliding window
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k, b;
	cin >> n >> k >> b;
	int a[n+5] = {0};
	for (int i = 0; i < b; i++){
		int x; cin >> x;
		a[x-1] = 1;
	}
	int sum = 0, ans = INT_MAX;
	for (int i = 0; i < k; i++)
		sum += a[i];
	for (int i = k; i < n; i++){
		sum = sum - a[i-k] + a[i];
		ans = min(ans, sum);
	}
	cout << ans;
}
