#include <bits/stdc++.h>

using namespace std;

#define ig cin.ignore()
bool check1(vector<string> v){
	int numEven = 0;
	for (auto x : v){
		if ( (x[x.length()-1] - '0') % 2 == 0 )
			++numEven;
	}
	return (v.size() % 2 == 0 && (numEven > v.size()-numEven));
}
bool check2(vector<string> v){
	int numOdd = 0;
	for (auto x : v){
		if ( (x[x.length()-1] - '0') % 2 != 0 )
			++numOdd;
	}
	return (v.size() % 2 != 0 && (numOdd > v.size() - numOdd));
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while (t--){
		string s;
		getline(cin, s);
		vector<string> v;
		stringstream ss(s);
		string word;
		while (ss >> word){
			v.push_back(word);
		}
		if (check1(v) || check2(v))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
