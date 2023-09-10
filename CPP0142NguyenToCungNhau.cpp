#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
	while (b != 0){
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}

bool prime(long long n){
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return n > 1;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int x;
		long long cnt = 0;
		cin >> x;
		for (int i = 1; i <= x; i++)
			if (gcd(x, i) == 1)
				++cnt;
		if (prime(cnt))
			cout << "1\n";
		else 
			cout << "0\n";
	}
}
