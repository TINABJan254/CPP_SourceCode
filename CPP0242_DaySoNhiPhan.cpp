#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n+5], b[n+5];
		int prefixSum1[n+5], prefixSum2[n+5];
		prefixSum1[0] = 0;
		prefixSum2[0] = 0;
		for (int i = 1; i <= n; i++){
			cin >> a[i];
			prefixSum1[i] = a[i] + prefixSum1[i-1];
		}
		for (int i = 1; i <= n; i++){
			cin >> b[i];
			prefixSum2[i] = b[i] + prefixSum2[i-1];
		}
		int maxSpan = -1;
		for (int i = 1; i < n; i++){
			for (int j = i+1; j <= n; j++)
				if (prefixSum1[j] - prefixSum1[i-1] == prefixSum2[j] - prefixSum2[i-1])
					maxSpan = max(maxSpan, j-i+1);
		}
		cout << maxSpan << endl;
	}
}
