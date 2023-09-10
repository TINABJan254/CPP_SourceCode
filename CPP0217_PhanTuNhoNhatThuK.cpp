#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, k, len = 0;
		cin >> n >> k;
		int a[n*n+5];
		for (int i = 0; i < n*n; i++)
			cin >> a[len++];
		sort(a, a+len);
		cout << a[k-1] << endl;
	}
}
