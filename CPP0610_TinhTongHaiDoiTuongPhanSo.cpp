#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll gcd(ll a, ll b){
	ll r;
	while (b != 0){
		r = a%b;
		a = b;
		b = r;
	}
	return a;
}

class PhanSo{
	private:
		ll tu, mau;
	public:
		PhanSo(){}
		PhanSo(ll initTu, ll initMau){
			tu = initTu;
			mau = initMau;
		}
		friend istream &operator >> (istream &in, PhanSo &x){
			in >> x.tu >> x.mau;
			return in;
		}
		friend ostream &operator << (ostream &out, PhanSo x){
			out << x.tu << "/" << x.mau;
			return out;
		}
		PhanSo operator + (const PhanSo other){
			PhanSo sum;
			sum.tu = tu*other.mau + mau*other.tu;
			sum.mau = mau*other.mau;
			ll r = gcd(sum.tu, sum.mau);
			sum.tu /= r;
			sum.mau /= r;
			return sum;
		}
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
