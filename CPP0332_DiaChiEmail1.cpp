#include <bits/stdc++.h>

using namespace std;

string str_lower(string s){
	for (int i = 0; i < s.size(); i++)
		s[i] = tolower(s[i]);
	return s;
}

int main(){
	string s;
	getline(cin, s);
	stringstream ss(s);
	string word;
	vector<string> res;
	while (ss >> word){
		res.push_back(str_lower(word));
	}
	cout << res[res.size()-1];
	for (int i = 0; i < res.size() - 1; i++)
		cout << res[i][0];
	cout << "@ptit.edu.vn";
}
