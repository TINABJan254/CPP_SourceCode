#include <bits/stdc++.h>

using namespace std;

int main(){
	string s, n;
	vector<string> v;
	getline(cin, s);
	cin >> n;
	stringstream ss(s);
	string word;
	while (ss >> word){
		v.push_back(word);
	}
	for (auto x : v){
		if (x != n)
			cout << x << ' ';
	}
}

