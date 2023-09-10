#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve(int a[105][105], int n){
	ll ans = 0;
	int sumRow[n]={0}, sumColumn[n]={0};
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++){
			sumRow[i] += a[i][j];
			sumColumn[i] += a[j][i];
		}
	int max = *max_element(sumRow, sumRow+n);
	if (max < *max_element(sumColumn, sumColumn+n))
		max = *max_element(sumColumn, sumColumn+n);
	for (int i = 0, j = 0; i < n, j < n; ){
		int diff = min(max-sumRow[i], max-sumColumn[j]);
		sumRow[i] += diff;
		sumColumn[j] += diff;
		ans += diff;
		if (sumRow[i] == max)
			++i;
		if (sumColumn[j] == max)
			++j;
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[105][105];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> a[i][j];
		solve(a, n);
	}
}

