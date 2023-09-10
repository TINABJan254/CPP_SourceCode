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

void solve(ll n){
	int res;
	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0) {
			res = i;
			while (n % i == 0){
				n /= i;
			}
		}
	}
	if (n != 1)
		cout << n;
	else
		cout << res;
	cout << endl;
}

int main(){
	//sieve();
	int t;
	cin >> t;
	while (t--){
		ll n;
		cin >> n;
		solve(n);
	}
}
