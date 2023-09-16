#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int k;
		int dd[26] = {0};
		string s;
		cin >> s >> k;
		for (char x : s)
			dd[x-'a']++;
		int cnt = 0;
		for (int i = 0; i < 26; i++)	
			if (dd[i] == 0)
				++cnt;
		if (s.size() >= 26 && k >= cnt)
			cout << "1\n";
		else
			cout << "0\n";
	}
	
}

