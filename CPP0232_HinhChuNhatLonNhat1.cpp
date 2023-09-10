#include <bits/stdc++.h>

using namespace std;
#define ll long long


int main(){
	int t;
	cin >> t;
	while (t--){
		int n, m;
		cin >> n >> m;
		int a[n][m], b[n][m];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++){
				cin >> a[i][j];
				b[i][j] = a[i][j];
			}
		for (int i = 0; i < n-1; i++)		
			for (int j = 0; j < m; j++)
				if (a[i][j] == 1 && a[i+1][j] == 1)
					b[i+1][j] = b[i][j] + 1;
		for (int i = 0; i < n; i++)
			sort(b[i], b[i]+m, greater<int>());
		int ans = 0, tmp = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++){
				tmp = (j+1)*b[i][j];
				ans = max(ans, tmp);
			}
		cout << ans << endl;
	}
}

