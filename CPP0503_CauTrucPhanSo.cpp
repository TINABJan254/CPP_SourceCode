#include <bits/stdc++.h>

using namespace std;

#define ll long long

struct PhanSo{
	ll tu, mau;
};

ll find_gcd(ll a, ll b){
	while (b != 0){
		ll r = a%b;
		a = b; 
		b = r;
	}
	return a;
}

void nhap(PhanSo &x){
	cin >> x.tu >> x.mau;
}

void rutgon(PhanSo &x){
	ll gcd =find_gcd(x.tu, x.mau);
	x.tu /= gcd;
	x.mau /= gcd;
}

void in(PhanSo x){
	cout << x.tu << "/" << x.mau;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
