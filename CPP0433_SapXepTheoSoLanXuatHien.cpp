#include <bits/stdc++.h>

using namespace std;
#define ll long long

bool cmp(pair<int, int> x, pair<int, int> y){
	if (x.second != y.second)
		return x.second > y.second;
	return x.first < y.first;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		map<int, int> mp;
		for (int i = 0; i < n; i++){
			int x;
			cin >> x;
			mp[x]++;
		}
		vector<pair<int, int>> v;
		for (auto it = mp.begin(); it != mp.end(); it++){
			v.push_back({it->first, it->second});
		}
		sort(begin(v), end(v), cmp);
		for (auto x : v){
			for (int i = 0; i < x.second; i++)
				cout << x.first << ' ';
		}
		cout << endl;
	}
}
