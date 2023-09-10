#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll sumMin(string x1, string x2){
	for (int i = 0; i < x1.size(); i++)	
		if (x1[i] == '6')
			x1[i] = '5';
	for (int i = 0; i < x2.size(); i++)
		if (x2[i] == '6')
			x2[i] = '5';
	ll n1 = stoll(x1);
	ll n2 = stoll(x2);
	return n1 + n2;
}

ll sumMax(string x1, string x2){
	for (int i = 0; i < x1.size(); i++)	
		if (x1[i] == '5')
			x1[i] = '6';
	for (int i = 0; i < x2.size(); i++)
		if (x2[i] == '5')
			x2[i] = '6';
	ll n1 = stoll(x1);
	ll n2 = stoll(x2);
	return n1 + n2;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		string x1, x2;
		cin >> x1 >> x2;
		cout << sumMin(x1, x2) << " ";
		cout << sumMax(x1, x2) << endl;
	}
}

