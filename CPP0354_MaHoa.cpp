#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	int t;
	cin >> t;
	while (t--){
		int cnt[256] = {0};
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++)
			cnt[s[i]]++;
		for (int i = 0; i < s.size(); i++){
			if (cnt[s[i]] > 0){
				cout << s[i] << cnt[s[i]];
				cnt[s[i]] = 0;
			}
		}
		cout << endl;
	}
}

