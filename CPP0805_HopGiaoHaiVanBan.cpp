#include <bits/stdc++.h>

using namespace std;
#define ll long long

string str_lwr(string s){
	for (int i = 0; i < s.size(); i++)
		s[i] = tolower(s[i]);
	return s;
}

int main(){
	ifstream fi, fi2;
	fi.open("DATA1.in");
	vector<string> v1, v2;
	set<string> hop, giao;
	string s;
	while (fi >> s){
		v1.push_back(str_lwr(s));
	}
	fi2.open("DATA2.in");
	while (fi2 >> s){
		v2.push_back(str_lwr(s));
	}
	for (auto x : v1)
		hop.insert(x);
	for (auto x : v2)
		if (hop.find(x) != hop.end())
			giao.insert(x);
	for (auto x : v2)
		hop.insert(x);
	for (auto x : hop)
		cout << x << ' ';
	cout << endl;
	for (auto x : giao)
		cout << x << ' ';
	fi.close();
}
