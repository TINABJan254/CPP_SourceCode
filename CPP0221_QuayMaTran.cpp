#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, m, len = 0;
		cin >> n >> m;
		int a[n+5][m+5], b[n+5][m+5] = {0};
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> a[i][j];
		int h1 = 0, h2 = n-1, c1 = 0, c2 = m-1;
		while (h2-h1 > 0 && c2-c1 > 0){
			b[h1][c1] = a[h1+1][c1];
			++c1;
			for (int i = c1; i <= c2; i++)
			b[h1][i] = a[h1][i-1];
			++h1;
			--c1;
			for (int i = h1; i <= h2; i++)
				b[i][c2] = a[i-1][c2];
			--c2;
			for (int i = c2; i >= c1; i--)
				b[h2][i] = a[h2][i+1];
			--h2;
			for (int i = h2; i >= h1; i--)
				b[i][c1] = a[i+1][c1];
			++c1;
		}
		//print
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if (b[i][j] == 0)
					cout << a[i][j] << " ";
				else
					cout << b[i][j] << " ";
		cout << endl;
	}
}
