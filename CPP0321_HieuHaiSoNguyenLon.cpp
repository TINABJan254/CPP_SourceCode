#include <bits/stdc++.h>

using namespace std;

int charToInt(char x){
	return x - '0';
}

string subTwoString(string a, string b){
	if (a.length() < b.length())
		swap(a, b);
	if (a.length() == b.length() && (a < b))
		swap(a, b);
	int n = a.length(), m = b.length();
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	b += string(n - m, '0'); //constructor cua string
	string res = "";
	int carry = 0; //nho
	for (int i = 0; i < n; i++){
		int tmp = charToInt(a[i]) - charToInt(b[i]) - carry;
		if (tmp < 0){
			res += (char)((10+tmp) + '0');
			carry = 1;
		}
		else{
			res += (char)(tmp + '0');
			carry = 0;
		}
	}
	reverse(res.begin(), res.end());
	return res;
}

int main(){
	int t; cin >> t;
	while (t--){
		string s1, s2;
		cin >> s1 >> s2;
		cout << subTwoString(s1, s2) << endl; 
	}
}
