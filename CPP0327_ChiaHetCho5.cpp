#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve(string a){
	ll r, LuyThua = 1;
	r = (a[a.length() -1] - '0') % 5;
	for (int i  = a.length() - 2; i >= 0; i--){//duyet tu phai sang trai
		LuyThua *= 2;
		LuyThua %= 5;
		r = r + (a[i] - '0')*LuyThua;
		r %= 5;
	}
	if (r == 0)
		cout << "Yes\n";
	else
		cout << "No\n";
}

int main(){
	int t;
	cin >> t;
	while (t--){
		string a;
		cin >> a;
		solve(a);
	}
}
