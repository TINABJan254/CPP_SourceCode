#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool incOrder(string s){
	for (int i = 0; i < s.size() - 1; i++ )
		if (s[i] >= s[i+1])
			return false;
	return true;
}

bool equalDigit(string s){
	for (int i = 0; i < s.size() - 1; i++)
		if (s[i] != s[i+1])
			return false;
	return true;
}

bool ThreeEqual_TwoEqual(string s){
	for (int i = 0; i < 2; i++)
		if (s[i] != s[i+1])
			return false;
	for (int i = 3; i < s.size()-1; i++)
		if (s[i] != s[i+1])
			return false;
	return true;
}

bool LuckyNumber(string s){
	for (int i = 0; i < s.size(); i++)
		if (s[i] != '6' && s[i] != '8')
			return false;
	return true;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		string x = s.substr(5, 3) + s.substr(9, 2);
		if (incOrder(x) || equalDigit(x) ||ThreeEqual_TwoEqual(x) || LuckyNumber(x) )
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}

