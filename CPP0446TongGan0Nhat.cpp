#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n+5];
		int res = 1e9;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < n; i++){
			for (int j = i+1; j < n; j++) {
				int tmp = a[i] + a[j];
				if (abs(tmp) < abs(res))
					res = tmp;
			}
		}
		cout << res << endl;
	}
}

