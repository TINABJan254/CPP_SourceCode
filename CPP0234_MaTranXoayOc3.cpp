#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n, m, k;
	cin >> n >> m >> k;
	int a[n][m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	vector<int> ans;
	ans.clear();
	int cnt = 0;
	int h1 = 0, h2 = n-1, c1 = 0, c2 = m-1;
	while (cnt < n*m){
		if (cnt < n*m){
			for (int i = c1; i <= c2; i++){
				ans.push_back(a[h1][i]);
				++cnt;
			}
			++h1;
		}
		if (cnt < n*m){
			for (int i = h1; i <= h2; i++){
				ans.push_back(a[i][c2]);	
				++cnt;
			}
			--c2;	
		}
		if (cnt < n*m){
			for (int i = c2; i >= c1; i--){
				ans.push_back(a[h2][i]);
				++cnt;	
			}
			--h2;	
		}
		if (cnt < n*m){
			for (int i = h2; i >= h1; i--){
				ans.push_back(a[i][c1]);
				++cnt;	
			}
			++c1;
		}
	}
	cout << ans[k-1] << endl;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		solve();
	}
}
