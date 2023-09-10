#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	string s;
	cin >> s;
	int ans = 0;
	for (int i = 0; i < s.length(); i++)
		if (s[i] == 'B')
			++ans;
	cout << ans;
}

