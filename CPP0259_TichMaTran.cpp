#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, p;
	cin >> n >> m >> p;
	int a[n+5][m+5], b[m+5][p+5], c[n+5][p+5];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < p; j++)
			cin >> b[i][j];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < p; j++){
			c[i][j] = 0;
			for (int k = 0; k < m; k++)
				c[i][j] += a[i][k]*b[k][j];
		}
			
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < p; j++)
			cout << c[i][j] << " ";
		cout << endl;
	}
		
	
}
