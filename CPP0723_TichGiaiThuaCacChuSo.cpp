#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define sz size()
#define EL "\n"
#define se second
#define fi first

void solve(string s){
	string ans = "";
	for (char x : s){
		if (x == '0' || x == '1')
			continue;
		else if (x == '2' || x == '3' || x == '5' || x == '7')
			ans += x;
		else if (x == '4')
			ans += "322";
		else if (x == '6')
			ans += "53";
		else if (x == '8')
			ans += "7222";
		else
			ans += "7332";
	}
	sort(ans.begin(), ans.end(), greater<char>());
	cout << ans << EL;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		string a;
		cin >> n >> a;
		solve(a);
	}
    return 0;
}
/*

*/
