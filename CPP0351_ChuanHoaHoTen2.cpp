#include <bits/stdc++.h>

using namespace std;

string convert(string s){
	s[0] = toupper(s[0]);
	for (int i = 1; i < s.size(); i++)
		s[i] = tolower(s[i]);
	return s;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int choice;
		cin >> choice;
		cin.ignore();
		string s;
		getline(cin, s);
		stringstream ss(s);
		string word;
		vector<string> res;
		while (ss >> word){
			res.push_back(convert(word));
		}
		if (choice == 1){
			cout << res[res.size()-1] << " ";
			for (int i = 0; i < res.size() - 1; i++)
				cout << res[i] << " ";
			cout << endl;
		}
		else{
			for (int i = 1; i < res.size(); i++)
				cout << res[i] <<  " ";
			cout << res[0] << endl;
		}
	}
}
