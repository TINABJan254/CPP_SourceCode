#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long b){
	while (b != 0){
		long long r = a % b;
		a = b;
		b = r;
	}
	return a;
}

long long lcm(long long a, long long b){
	return (1ll*a/gcd(a, b))*b;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		long long res = 1;
		for (int i = 1; i <= n; i++)
			res = lcm(res, i);
		cout << res << endl;
	}
}
