#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool prime(int n){
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return n > 1;
}

int main(){
	int n;
	cin >> n;
	if (prime(n))
		cout << "YES";
	else 
		cout << "NO";
}
