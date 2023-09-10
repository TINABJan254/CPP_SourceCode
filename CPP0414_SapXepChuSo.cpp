#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		set<char> se;
		string s;
		for (int i = 0; i < n; i++){
			cin >> s;
			for (int j = 0; j < s.size(); j++)
				se.insert(s[j]);
		}
		for (set<char> :: iterator it = se.begin(); it != se.end(); it++)
			cout << *it << " ";
		cout << endl;
	}
}

