#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool prime[1000000];

void sieve(){
	for (int i = 0; i <= 1000000; i++)
		prime[i] = true;
	prime[0] = prime[1] = false;
	for (int i = 2; i <= sqrt(1000000); i++){
		if (prime[i]) {
			for (int j = i*i; j <= 1000000; j += i)
				prime[j] = false;
		}
	}
}

void solve(int n){
	if (n < 2){
		cout << "-1\n";
		return ;
	}
	for (int i = 2; i <= n/2; i++)
		if (prime[i] && prime[n-i]){
			cout << i << " " << n-i;
			cout << endl;
			return;
		}
	cout << "-1\n";
}

int main(){
	sieve();
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		solve(n);
	}
}
