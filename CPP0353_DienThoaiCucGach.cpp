#include <bits/stdc++.h>

using namespace std;

#define ll long long

void str_upper(string &s){
	for (int i = 0; i < s.size(); i++)
		s[i] = toupper(s[i]);
}

char convert(char c){
	if (c == 'A' || c == 'B' || c == 'C')
		return '2';
	if (c == 'D' || c == 'E' || c == 'F')
		return '3';
	if (c == 'G' || c == 'H' || c == 'I')
		return '4';
	if (c == 'J' || c == 'K' || c == 'L')
		return '5';
	if (c == 'M' || c == 'N' || c == 'O')
		return '6';
	if (c == 'P' || c == 'Q' || c == 'R' || c == 'S')
		return '7';
	if (c == 'T' || c == 'U' || c == 'V')
		return '8';
	if (c == 'W' || c == 'X' || c == 'Y' || c == 'Z')
		return '9';
}

bool Palindrome(vector<char> v){
	int l = 0, r = v.size() - 1;
	while (l < r){
		if (v[l] != v[r])
			return false;
		++l;
		--r;
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		str_upper(s);
		vector<char> ans;
		for (int i = 0; i < s.size(); i++){
			char tmp = convert(s[i]);
			if (ans.size() == 0 || tmp != ans[ans.size() - 1])
				ans.push_back(tmp);
		}
		if (Palindrome(ans))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}

