#include <bits/stdc++.h>

using namespace std;

bool check_even(string s){
	for (int i = 0; i < s.size(); i++){
		if (s[i] != '2' && s[i] != '4' && s[i] != '6' && s[i] != '8' && s[i] != '0')
			return false;
	}
	return true;
}

bool dx(string s){
	int l = 0, r = s.size() - 1;
	while (l <= r){
		if (s[l] != s[r])
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
		if (check_even(s) && dx(s))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}

