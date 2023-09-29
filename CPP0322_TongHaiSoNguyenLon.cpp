#include <bits/stdc++.h>

using namespace std;

int charToInt(char x){
	return x - '0';
}

string addTwoString(string a, string b){
	if (a.length() < b.length())
		swap(a, b);
	int lena = a.length(), lenb = b.length();
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	b += string(lena - lenb, '0'); //constructor cua string
	string res = "";
	int carry = 0; //nho
	for (int i = 0; i < lena; i++){
		int tmp = charToInt(a[i]) + charToInt(b[i]) + carry;
		res += (char)(tmp % 10 + '0'); // doi sang char thi + '0'
		carry = tmp / 10;
	}
	if (carry)
		res += (char)(carry + '0');
	reverse(res.begin(), res.end());
	return res;
}

int main(){
	int t; cin >> t;
	while (t--){
		string s1, s2;
		cin >> s1 >> s2;
		cout << addTwoString(s1, s2) << endl; 
	}
}
