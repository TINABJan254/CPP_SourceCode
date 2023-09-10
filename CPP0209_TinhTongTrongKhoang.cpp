#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, Q;
		cin >> n >> Q;
		int a[n+5];
		ll prefixSumArr[n+5];
		prefixSumArr[0] = 0;
		for (int i = 1; i <= n; i++){
			cin >> a[i];
			if (i == 1)
				prefixSumArr[i] = a[i];
			else
				prefixSumArr[i] = 1ll*(a[i]+prefixSumArr[i-1]);
		}
		while (Q--){
			int L, R;
			cin >> L >> R;
			cout << prefixSumArr[R] - prefixSumArr[L-1] << endl;
		}
	}
	
}
