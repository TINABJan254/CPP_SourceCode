#include <bits/stdc++.h>

using namespace std;
#define ll long long

void generateMatrix(int a[], int n){
	int row = 0, col = 0;
	int m = n, cnt = 0, x = n;
	int ans[n][n];
	while (col < m && row < n){
		for (int i = col; i < m; i++)
			ans[row][i] = a[cnt++];
		++row;
		for (int i = row; i < n; i++)
			ans[i][m-1] = a[cnt++];
		--m;
		if (row < n)
			for (int i = m-1; i >= col; i--)
				ans[n-1][i] = a[cnt++];
		--n;
		if (col < m)
			for (int i = n-1; i >= row; i--)
				ans[i][col] = a[cnt++];
		++col;
	}
	for (int i = 0; i < x; i++){
		for (int j = 0; j < x; j++)
			cout << ans[i][j] << ' ';
		cout << endl;
	}
}

int main(){
	int n;
	cin >> n;
	int a[n*n], ans[n][n];
	for (int i = 0; i < n*n; i++)
		cin >> a[i];
	sort(a, a+n*n);
	generateMatrix(a, n);
}

