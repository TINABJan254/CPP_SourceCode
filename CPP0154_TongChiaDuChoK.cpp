#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solveTC(){
    int n;
    ll k, res = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        res += (i % k);
    cout << (res == k) << endl;
}

int main(){
	int t; cin >> t;
	while (t--){
		solveTC();
	}
}
