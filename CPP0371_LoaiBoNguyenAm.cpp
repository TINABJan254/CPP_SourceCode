#include <bits/stdc++.h>

using namespace std;

#define ll long long

void strlower(string &s){
	for (int i = 0; i < s.size(); i++)
		s[i] = tolower(s[i]);
}

int main(){
	string s;
	cin >> s;
	strlower(s);
	for (int i = 0; i < s.size(); i++)
		if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y')
			cout << '.' << s[i];
}

