#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--)	{
		char s;
		cin >> s;
		if (s >= 'a' && s <= 'z')
			cout << (char)toupper(s) << endl;
		else
			cout << (char)tolower(s) << endl;
	}
}
