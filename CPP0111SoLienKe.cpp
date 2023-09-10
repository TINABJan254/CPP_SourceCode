#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		bool flag = true;
		for (int i = 1; i < s.size(); i++){
			int c1 = s[i] - '0';
			int c2 = s[i-1] - '0';
			if (abs(c1 - c2) != 1){
				cout << "NO\n";
				flag = false;
				break;
			}
		}
		if (flag)
			cout << "YES\n";	
	}
}
