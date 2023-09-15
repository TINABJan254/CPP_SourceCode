#include <bits/stdc++.h>

using namespace std;
#define ll long long

int to_ll(string s){
	if(s.size() > 9)
		return -1;
	ll res = 0;
	for (int i = 0; i < s.size(); i++){
		if (!isdigit(s[i]))
			return -1;
		res = res*10 + (s[i] - '0');
	}
	if (res <= INT_MAX)
		return res;
	return -1;
}

int main(){
	ll res = 0;
	ifstream fi;
	fi.open("DATA.in");
	while (!fi.eof()){
		string s;
		fi >> s;
		int ok = to_ll(s);
		if (ok != -1)
			res += ok;
	}
	cout << res;
	fi.close();
}
