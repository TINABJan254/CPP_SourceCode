#include <bits/stdc++.h>

using namespace std;

void str_lwr(string &s){
	for (int i = 0; i < s.length(); i++)
		s[i] = tolower(s[i]);
}

int main(){
	int n;
	cin >> n; cin.ignore();
	map<string, int> mp;
	for (int i = 0; i < n; i++){
		vector<string> v;
		string s, ans;
		getline(cin, s);
		str_lwr(s);
		stringstream ss(s);
		string word;
		while (ss >> word){
			v.push_back(word);
		}
		ans = v[v.size() - 1];
		for (int i = 0; i < v.size() - 1; i++)
			ans += v[i][0];
		if (mp.find(ans) == mp.end()){
			cout << ans << "@ptit.edu.vn\n";
			mp[ans]++;
		}
		else{
			mp[ans]++;
			cout << ans << mp[ans] << "@ptit.edu.vn\n";
		}
	}
}

