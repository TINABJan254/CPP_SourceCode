#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		int cnt = 0;
		for (int i = 0; i < n; i++)
			if (a[i] <= k)
				++cnt;
		int bad = 0;
		for (int i = 0; i < cnt; i++)
			if (a[i] > k)
				++bad;
		int ans = bad;
		for (int i = 0, j = cnt; j < n; i++, j++){
			if (a[i] > k)
				--bad;
			if (a[j] > k)
				++bad;
			ans = min(ans, bad);
		}
		cout << ans << endl;
	}
}

