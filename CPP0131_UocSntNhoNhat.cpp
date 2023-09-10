#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool prime(int n){
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return n > 1;
}

int minFactor(int n){
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return i;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++){
			if (i == 1)
				cout << 1 << " ";
			else if (i % 2 == 0)
				cout << 2 << " ";
			else if (prime(i))
				cout << i << " ";
			else 
				cout << minFactor(i) << " ";
		}
		cout << endl;
	}
}
