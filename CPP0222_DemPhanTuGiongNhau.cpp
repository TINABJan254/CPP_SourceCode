#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n+5][n+5];
		map <int, int> mp;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> a[i][j];
		for (int i = 0; i < n; i++)
			mp[a[0][i]] = -1;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++)
				if (mp.find(a[i][j]) != mp.end())
					if (mp[a[i][j]] == i-1)
						mp[a[i][j]] = i;
		}
		int ans = 0;
		for (auto x : mp)
			if (x.second == n-1)
				++ans;
		cout << ans << endl;
	}
}
