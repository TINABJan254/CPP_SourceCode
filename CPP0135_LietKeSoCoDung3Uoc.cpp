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

int main(){
	sieve();
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		for (int i = 2; i <= sqrt(n); i++)
			if (prime[i])
				cout << i*i << " ";
		cout << endl;
	}
}
