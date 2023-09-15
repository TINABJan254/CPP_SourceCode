#include <bits/stdc++.h>

using namespace std;
#define ll long long

string str_lwr(string s){
	for (int i = 0; i < s.size(); i++)
		s[i] = tolower(s[i]);
	return s;
}

int main(){
	ifstream fi;
	fi.open("VANBAN.in");
	set<string> se;
	string s;
	while (fi >> s){
		se.insert(str_lwr(s));
	}
	for (auto x : se)
		cout << x << endl;
	fi.close();
}

