#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define EL "\n"

void solve(){
	int n;
	cin >> n;
	int a[n];
	ll sumL = 0, sumR = 0;
	for (int i = 0; i < n; ++i){
		cin >> a[i];
		sumR += a[i];
	}
	int index = 0;
	while (index < n){
		sumR -= a[index];
		if (sumL == sumR){
			cout << index + 1 << EL;
			return;
		}
		sumL += a[index];
		++index;
	}
	cout << "-1\n";
}

int main(){
	int t;
	cin >> t;
	while (t--){
		solve();
	}
	return 0;
}
