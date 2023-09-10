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
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if (a[i][j] == 1){
					//row
					for (int k = 0; k < m; k++)
						if (a[i][k] != 1)
							a[i][k] = 2;
					//column
					for (int k = 0; k < n; k++)
						if (a[k][j] != 1)
							a[k][j] = 2;
				}
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++)
				if (a[i][j] == 2)
					cout << "1 ";
				else
					cout << a[i][j] << " ";
			cout << endl;
		}
	}
}
