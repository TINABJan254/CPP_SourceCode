#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		string ans;
		int sum = 0;
		for (int i = 0; i < s.length(); i++)
			if (isdigit(s[i]))
				sum += s[i] - '0';
			else
				ans.push_back(s[i]);
		sort(begin(ans), end(ans));
		ans += to_string(sum);
		cout << ans << endl;
	}
}

