#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int a[256] = {0};
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++)
			a[s[i]]++;
		for (int i = 0; i < s.size(); i++)
			if (a[s[i]] == 1)
				cout << s[i];
		cout << endl;
	}
	
}

