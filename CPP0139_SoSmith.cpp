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

int sumDigit(int n){
	int sum = 0;
	while (n != 0){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int pt(int n){
	int sum = 0;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0){
			while (n % i == 0){
				sum += sumDigit(i);
				n /= i;
			}
		}
	if (n > 1)
		sum += sumDigit(n);
	return sum;
}

int main(){
	sieve();
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int c = sumDigit(n);
		int d = pt(n);
		if (!prime[n] && c == d)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
