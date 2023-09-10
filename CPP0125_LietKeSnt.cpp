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
	int a, b;
	cin >> a >> b;
	if (a > b){
		int tmp = a;
		a = b;
		b = tmp;
	}
	for (int i = a+1; i < b; i++)
		if (prime(i))
			cout << i << ' ';
}
