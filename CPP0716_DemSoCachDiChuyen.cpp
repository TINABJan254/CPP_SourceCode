#include <bits/stdc++.h>

using namespace std;

#define ll long long

int n, k;
int a[25][25];
ll ans, res;

void init(){
	res = a[0][0];
	ans = 0;
}

void Try(int i, int j){
	if (i == n-1 && j == n - 1){
		if (res == k)
			++ans;
	}
	if (i+1 < n){
		res += a[i+1][j];
		Try(i+1, j);
		res -= a[i+1][j];
	}
	if (j+1 < n){
		res += a[i][j+1];
		Try(i, j+1);
		res -= a[i][j+1];
	}
}

int main(){
	int t;
	cin >> t;
	while (t--){
		cin >> n >> k;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> a[i][j];
		init();
		Try(0,0);
		cout << ans << endl;
	}
}
