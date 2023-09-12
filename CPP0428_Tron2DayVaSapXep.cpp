#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, m;
		multiset<int> ms;
		cin >> n >> m;
		for (int i = 0; i < n; i++){
			int x; cin >> x;
			ms.insert(x);
		}
		for (int i = 0; i < m; i++){
			int x; cin >> x;
			ms.insert(x);
		}
		for (auto x : ms){
			cout << x << ' ';
		}
		cout << endl;
	}
}
