#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--)	{
		string s;
		cin >> s;
		bool flag = true;
		for (int i = 0; i < s.size(); i++)
			if (s[i] != '6' && s[i] != '8' && s[i] != '0'){
				cout << "NO" << endl;
				flag = false;
				break;
			}
		if (flag) cout << "YES\n";
	}
}

