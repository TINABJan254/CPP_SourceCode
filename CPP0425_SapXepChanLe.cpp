#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n], res[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a+n);
		int index = 0;
		for (int i = 0; i < n; i += 2)
			res[i] = a[index++];
		for (int i = 1; i < n; i += 2)
			res[i] = a[index++];
		for (int x : res)
			cout << x << ' ';
		cout << endl;
	}
}

