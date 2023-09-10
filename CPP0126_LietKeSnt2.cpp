#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool prime[10005];

void sieve(){
	for (int i = 0; i <= 10005; i++)
		prime[i] = true;
	prime[0] = prime[1] = false;
	for (int i = 2; i <= sqrt(10005); i++){
		if (prime[i]) {
			for (int j = i*i; j <= 10005; j += i)
				prime[j] = false;
		}
	}
}

int main(){
	sieve();
	int t;
	cin >> t;
	while (t--){
		int m, n;
		cin >> m >> n;
		for (int i = m; i <= n; i++)
			if (prime[i])
				cout << i << ' ';
		cout << endl;
	}
}
