#include <bits/stdc++.h>

using namespace std;

int sum(string s){
	int d = 0;
	for (int i = 0; i < s.size(); i++)
		d += s[i] - '0';
	return d;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		while (s.size() > 1){
			int tmp = sum(s);
			s = to_string(tmp);
		}
		cout << s << endl;
	}
}
