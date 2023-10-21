#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while (t--){
		int a, m;
		cin >> a >> m;
		a %= m;
		int res, flag = 1;
		for (int i = 0; i < m; i++){
			int x = i % m;
			res = (a*x) % m;
			if (res == 1){
				cout << i << endl;
				flag = 0;
				break;
			}
		}
		if (flag)
			cout << "-1\n";
	}
}
