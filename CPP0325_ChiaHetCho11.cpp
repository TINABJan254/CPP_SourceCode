#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while (t--){
		string n;
		cin >> n;
		int sum = 0;
		for (int i = 0; i < n.size(); i++)
			if (i % 2 == 0)
				sum += n[i] - '0';
			else
				sum -= n[i] - '0';
		if (sum % 11 == 0)
			cout << "1\n";
		else
			cout << "0\n";
	}
}
