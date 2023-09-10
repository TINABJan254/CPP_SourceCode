#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(int n, int k){
	vector <int> res;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0){
			while (n % i == 0){
				res.push_back(i);
				n /= i;
			}
		}
	if (n > 1)
		res.push_back(n);
	if (k > res.size()){
		cout << "-1\n";
		return;
	}
	else 
		cout << res[k-1] << endl;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, k;
		cin >> n >> k;
		solve(n, k);
	}
}
