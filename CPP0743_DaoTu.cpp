#include <bits/stdc++.h>

using namespace std;

#define ll long long

void rev(vector<string> &v){
	int l = 0, r = v.size() - 1;
	while (l < r){
		swap(v[l], v[r]);
		++l;
		--r;
	}
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s;
		vector<string> v;
		getline(cin, s);
		stringstream ss(s);
		string word;
		while (ss >> word){
			v.push_back(word);
		}
		rev(v);
		for (auto x : v)
			cout << x << " ";
		cout << endl;
	}
}
