#include <bits/stdc++.h>

using namespace std;

int search(int a[], int n, int x){
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			return i;
	return -1;
}

int main(){
	int test;
	cin >> test;
	while (test--){
		int n, x;
		cin >> n >> x;
		int a[n+5];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		int pos = search(a, n, x);
		if (pos != -1)
			cout << pos +1 << endl;
		else 
			cout << pos <<endl;
	}
}

