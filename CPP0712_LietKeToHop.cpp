#include <bits/stdc++.h>

using namespace std;

#define ll long long

int check, n, k;
int a[25];

void ktao(){
	for (int i = 1; i <= k; i++)
		a[i] = i;
	check = 1;
}

void sinh(){
	int i = k;
	//di tim bit chua dat max = n-k+i
	while (i >= 1 && a[i] == n-k+i){
		--i;
	}
	if (i == 0)
		check = 0;
	else{
		a[i]++;
		for (int j = i+1; j <= k; j++)
			a[j] = a[j-1] + 1;
	}
}

int main(){
	int t;
	cin >> t;
	while (t--){
		cin >> n >> k;
		ktao();
		while (check){
			for (int i = 1; i <= k; i++)
				cout << a[i];
			cout << " ";
			sinh();
		}
		cout << endl;
	}
}
