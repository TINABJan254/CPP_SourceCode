#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		bool INVALID = false;
		set<char> se;
		if (s[0] == '0'){
			cout << "INVALID\n";
		}
		else{
			for (int i = 0; i < s.length(); i++)
				if (isdigit(s[i]))
					se.insert(s[i]);
				else{
					cout << "INVALID\n";
					INVALID = true;
					break;
				}
			if (INVALID)
				continue;
			if (se.size() == 10)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
		
	}
}

