#include <bits/stdc++.h>

using namespace std;

bool check_tn(string s){
	if (s.size() < 2)
		return false;
	int l = 0, r = s.size() - 1;
	while (l < r){
		if (s[l] != s[r])
			return false;
		++l;
		--r;
	}
	return true;
}

bool cmp(pair<string, int> x, pair<string, int> y){
	if (x.first.size() != y.first.size())
		return x.first.size() > y.first.size();
	return x.first > y.first;
}

int main(){
	map<string, int> mp;
	string s;
	while (cin >> s){
		if (check_tn(s))
			mp[s]++;
	}
	vector<pair<string, int>> res;
	for (auto it = mp.begin(); it != mp.end(); it++)
		res.push_back({it->first, it->second});
	sort(begin(res), end(res), cmp);
	for (int i = 0; i < res.size(); i++)
		cout << res[i].first << ' ' << res[i].second << endl;
}
