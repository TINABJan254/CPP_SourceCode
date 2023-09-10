#include <bits/stdc++.h>

using namespace std;

bool check(long long n){
	int r = n % 100;
	return r == 86;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		long long n;
		cin >> n;
		if (check(n))
			cout << "1\n";
		else cout << "0\n";
	}
}

