#include <bits/stdc++.h>

using namespace std;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] =	{-1, 0, 1, -1, 1, -1, 0, 1};

int n, m;
int a[105][105];

void loang(int i, int j){
	a[i][j] = 0;
	for (int k = 0; k < 8; k++){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if (i1 >= 0 && i1 <= n-1 && j1 >= 0 && j1 <= m-1 && a[i1][j1])
			loang(i1, j1);
	}
}

int main(){
	int t;
	cin >> t;
	while (t--){
		cin >> n >> m;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		int ans = 0;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++)
				if (a[i][j]){
					++ans;
					loang(i, j);
				}
		}
		cout << ans << endl;
	}
}
