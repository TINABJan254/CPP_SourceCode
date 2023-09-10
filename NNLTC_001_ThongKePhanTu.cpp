#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> v;
	map<int, int> mp;
	int n;
	while (cin >> n){
		if (mp.find(n) == mp.end())
			v.push_back(n);
		mp[n]++;
	}
	for (int x : v)
		cout << x << " " << mp[x] << endl;
}
