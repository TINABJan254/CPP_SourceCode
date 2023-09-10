#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, m;
		cin >> n >> m;
		int a[n+5][m+5];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> a[i][j];
		int cnt = 0;
		int h1 = 0, h2 = n-1, c1 = 0, c2 = m-1;
		while (cnt < n*m){
			//top
			if (cnt < n*m){
				for (int i = c1; i <= c2; i++){
					cout << a[h1][i] << ' ';
					++cnt;
				}
				++h1;
			}
			
			//right
			if (cnt < m*n){
				for (int i = h1; i <= h2; i++){
					cout << a[i][c2] << ' ';
					++cnt;
				}	
				--c2;
			}
			
			//bottom
			if (cnt < m*n){
				for (int i = c2; i >= c1; i--){
					cout << a[h2][i] << ' ';
					++cnt;
				}
				--h2;
			}
			//left
			if (cnt < m*n){
				for (int i = h2; i >= h1; i--){
					cout << a[i][c1] << ' ';
					++cnt;
				}
				++c1;
			}
		}
		cout << endl;
	}
}
