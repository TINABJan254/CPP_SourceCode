#include <bits/stdc++.h>

using namespace std;

#define ll long long

int n, check;
int a[25];

void ktao(){
	for (int i = 0; i <= n; i++)
		a[i] = 0;
	check = 1;
}

void sinh(){
	int i = n;
	while (i >= 1 && a[i] == 1){
		a[i] = 0;
		--i;
	}
	if (i == 0)
		check = 0; // last config
	a[i] = 1;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		cin >> n;
		ktao();
		while (check){
			for (int i = 1; i <= n; i++)
				cout << a[i];
			cout << " ";
			sinh();
		}
		cout << endl;
	}
}
