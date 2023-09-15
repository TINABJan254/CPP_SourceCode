#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	ifstream fi;
	fi.open("DATA.in");
	vector<int> v1, v2;
	set<int> hop, giao;
	int n, m;
	fi >> n >> m;
	for (int i = 0; i < n; i++){
		int x;
		fi >> x;
		v1.push_back(x);
	}
	for (int i = 0; i < m; i++){
		int x;
		fi >> x;
		v2.push_back(x);
	}
	for (auto x : v1)
		hop.insert(x);
	for (auto x : v2)
		if (hop.find(x) != hop.end())
			giao.insert(x);
	for (auto x : giao)
		cout << x << ' ';
	fi.close();
}
