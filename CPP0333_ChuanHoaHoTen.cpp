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
	string s;
	getline(cin, s);
	stringstream ss(s);
	string word;
	vector<string> res;
	while (ss >> word){
		res.push_back(convert(word));
	}
	str_upper(res[res.size() - 1]);
	for (int i = 0; i < res.size(); i++){
		if (i == res.size() - 1)
			cout << res[i];
		else if (i == res.size() - 2)
			cout << res[i] << ", ";
		else
			cout << res[i] << " ";
	}
}
