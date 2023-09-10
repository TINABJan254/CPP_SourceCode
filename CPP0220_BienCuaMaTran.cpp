#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n+5][n+5];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> a[i][j];
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++)
				if (i == 0 || i == n - 1)
					cout << a[i][j] << " ";
				else if (j == 0 || j == n - 1)
					cout << a[i][j] << " ";
				else
					cout << "  ";
				
			cout << endl;
		}
	}
}
