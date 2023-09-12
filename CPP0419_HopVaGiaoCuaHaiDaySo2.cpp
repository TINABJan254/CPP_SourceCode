#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		set<int> se1, se2;
		//se1 union, se2 intersection
		for (int i = 0; i < n; i++){
			cin >> a[i];
			se1.insert(a[i]);
		}
		for (int i = 0; i < m; i++){
			cin >> b[i];
			if (se1.find(b[i]) != se1.end())
				se2.insert(b[i]);
			se1.insert(b[i]);		
		}
		for (auto x : se1)
			cout << x << ' ';
		cout << endl;
		for(auto x : se2)
			cout << x << ' ';
		cout << endl;
	}
}
