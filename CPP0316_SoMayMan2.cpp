#include <bits/stdc++.h>

using namespace std;

bool isLuckyNumber(string s){
	if (s.length() == 1 && s == "9")
		return true;
	if (s.length() == 1 && s != "9")
		return false;
	int sumDigit = 0;
	for (char x : s){
		sumDigit += x - '0';
	}
	return isLuckyNumber(to_string(sumDigit));
}

int main(){
	int t; cin >> t;
	while (t--){
		string s;
		cin >> s;
		if (isLuckyNumber(s))
			cout << "1\n";
		else
			cout << "0\n";
	}
}
