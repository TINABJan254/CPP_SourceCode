#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n+5];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		map<int, int> mp;
		bool flag = true;
		for (int i = 0; i < n; i++){
			if (mp.find(a[i]) != mp.end()){
				cout << a[i] << endl;
				flag = false;
				break;
			}	
			else
				mp[a[i]]++;
		}
		if (flag)
			cout << "-1\n";
	}
}

