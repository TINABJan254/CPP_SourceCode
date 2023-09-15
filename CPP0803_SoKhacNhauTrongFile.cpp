#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	ifstream fi;
	fi.open("DATA.in");
	map<int, int> mp;
	int s;
	while (fi >> s){
		mp[s]++;
	}
	for (auto it = mp.begin(); it != mp.end(); it++)
		cout << it->first << ' ' << it->second << endl;
	fi.close();
}
