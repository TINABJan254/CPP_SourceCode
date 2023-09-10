#include <bits/stdc++.h>

using namespace std;

string convert(string s){
	s[0] = toupper(s[0]);
	for (int i = 1; i < s.size(); i++)
		s[i] = tolower(s[i]);
	return s;
}

void str_upper(string &s){
	for (int i = 0; i < s.size(); i++)
		s[i] = toupper(s[i]);
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		set<string> se1;
		string s1, s2;
		getline(cin, s1);
		stringstream ss(s1);
		string word;
		while (ss >> word){
			se1.insert(word);
		}
		getline(cin, s2);
		stringstream sc(s2);
		while (sc >> word){
			auto pos = se1.find(word);
			if (pos != se1.end())
				se1.erase(pos);
		}
		for (auto x : se1)
			cout << x << " ";
		cout << endl;
	}
}
