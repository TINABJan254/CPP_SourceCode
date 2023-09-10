#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	ll Fibo[92];
	Fibo[0] = 0;
	Fibo[1] = 1;
	for (int i = 2; i <= 92; i++)
		Fibo[i] = Fibo[i-1] + Fibo[i-2];
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		cout << Fibo[n] << endl;
	}
}
