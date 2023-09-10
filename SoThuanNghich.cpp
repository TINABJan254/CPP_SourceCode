#include <bits/stdc++.h>

using namespace std;

bool tn(string s){
	int l = 0, r = s.size()-1;
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
	while (t--)	{
		string s;
		cin >> s;
		if (tn(s))
			cout << "YES\n";
		else 
			cout << "NO\n";
	}
}
