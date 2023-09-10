#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		int ans = 0;
		string s;
		getline(cin, s);
		stringstream ss(s);
		string word;
		while (ss >> word){
			++ans;
		}
		cout << ans << endl;
	}
	
}

