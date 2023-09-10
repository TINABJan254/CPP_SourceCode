#include <bits/stdc++.h>

using namespace std;
#define ll long long


class PhanSo{
	private:
		ll tu, mau;
	public:
		PhanSo(ll initTu, ll initMau){
			tu = initTu;
			mau = initMau;
		}
		void rutgon();
		friend istream &operator >> (istream &in, PhanSo &x){
			in >> x.tu >> x.mau;
			return in;
		}
		friend ostream &operator << (ostream &out, PhanSo x){
			out << x.tu << "/" << x.mau;
			return out;
		}
};

ll gcd(ll a, ll b){
	ll r;
	while (b != 0){
		r = a%b;
		a = b;
		b = r;
	}
	return a;
}


void PhanSo::rutgon(){
	ll r = gcd(tu, mau);
	tu /= r;
	mau /= r;
}

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
