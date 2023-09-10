#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n+5];
		bool flag = true;
		for (int i = 0; i < n-1; i++)
			cin >> a[i];
		for (int i = 0; i < n-1; i++){
			if (i+1 != a[i]){
				cout << i+1 << endl;
				flag = false;
				break;
			}
		}
		if (flag)
			cout << n << endl;
	}
	
}


