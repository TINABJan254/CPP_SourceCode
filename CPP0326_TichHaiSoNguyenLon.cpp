#include <bits/stdc++.h>

using namespace std;
#define ll long long

int charToInt(char x){
	return x - '0';
}

string addTwoBigNum(string a, string b){
	if (a.length() < b.length())
		swap(a, b);
	int lena = a.length(), lenb = b.length();
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	b += string(lena - lenb, '0');
	string res = "";
	int carry = 0;
	for (int i = 0; i < lena; i++){
		int tmp = charToInt(a[i]) + charToInt(b[i]) + carry;
		res += (char)(tmp % 10 + '0');
		carry = tmp / 10;
	}
	if (carry){
		res += (char)(carry + '0');
	}
	reverse(res.begin(), res.end());
	return res;
}

string multiply1(string a, ll b){
	string res = "";
	int carry = 0;
	for (int i = a.length() - 1; i >= 0; i--){
		ll tmp = charToInt(a[i]) * b + carry;
		carry  = tmp / 10; //lay chu so dau
		res = (char)(tmp % 10 + '0') + res; //lay chu so cuoi (chen vao dau res vi duyet tu cuoi ve)
	}
	if (carry > 0){
		res = (char)(carry + '0') + res; //con phan du thi cho vao dau res luon
	}
	return res;
}

string multiply2(string a, string b){
	string sum;
	int m = -1; //so lan can dich sang ben trai khi thuc hien phep nhan
	for (int i = a.length() - 1; i >= 0; i--){
		++m;
		string tmp = multiply1(b, charToInt(a[i]));
		for (int j = 0; j < m; j++)
			tmp += '0';
		sum = addTwoBigNum(tmp, sum);
	}
	return sum;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		string a, b;
		cin >> a >> b;
		cout << multiply2(a, b) << endl;
	}
}
