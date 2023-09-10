#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++)
			if (!isdigit(s[i]))
				s[i] = ' ';
		stringstream ss(s);
		string word;
		int ans = 0;
		while (ss >> word){
			int tmp = stoi(word);
			ans += tmp;
		}
		cout << ans << endl;
	}
}

