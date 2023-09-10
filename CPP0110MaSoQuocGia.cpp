#include <bits/stdc++.h>

using namespace std;

int main(){
	string root = "084";
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		int pos = s.find(root);
		s.erase(pos, 3);
		cout << s << endl;			
	}
}
