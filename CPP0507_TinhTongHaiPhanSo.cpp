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

PhanSo tong(PhanSo x, PhanSo y){
	PhanSo tmp;
	tmp.tu = x.tu*y.mau + y.tu*x.mau;
	tmp.mau = x.mau * y.mau;
	rutgon(tmp);
	return tmp;
}

void in(PhanSo x){
	cout << x.tu << "/" << x.mau;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
