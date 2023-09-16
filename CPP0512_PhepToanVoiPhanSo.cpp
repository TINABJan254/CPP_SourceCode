#include <bits/stdc++.h>

using namespace std;
#define ll long long

struct PhanSo{
	ll tu, mau;
};

typedef struct PhanSo PS;

ll gcd(ll x, ll y){
	while (y != 0){
		ll r = x%y;
		x = y;
		y = r;
	}
	return x;
}

PS solve1(PS A, PS B){
	PS tmp;
	tmp.tu = A.tu*B.mau + A.mau*B.tu;
	tmp.mau = A.mau*B.mau;
	ll g = gcd(tmp.tu, tmp.mau);
	tmp.tu  /= g;
	tmp.mau /= g;
	return tmp;
}

PS solve2(PS A, PS B, PS C){
	PS res;
	res.tu = A.tu * B.tu * C.tu;
	res.mau = A.mau * B.mau * C.mau;
	ll g = gcd(res.tu, res.mau);
	res.tu  /= g;
	res.mau /= g;
	return res;
}

void process(PS A, PS B){
	PS C = solve1(A, B); // (A+B)^2
	C.mau = pow(C.mau, 2);
	C.tu  = pow(C.tu,  2);
	PS D = solve2(A, B, C); // (A*B*C)
	cout << C.tu << '/' << C.mau << ' ' << D.tu << '/' << D.mau << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
