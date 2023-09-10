#include <bits/stdc++.h>

using namespace std;
#define ll long long

class NhanVien
{
	private:
		string code, name, gender, birth, address, tax, date;
	public:
		NhanVien(){
			code = "00001";
		}
		friend istream &operator >> (istream &in, NhanVien &x){
			getline(in, x.name);
			in >> x.gender >> x.birth;
			in.ignore();
			getline(in, x.address);
			in >> x.tax >> x.date;
			return in;
		}
		friend ostream &operator << (ostream &out, NhanVien x){
			out << x.code << ' ' << x.name << ' ' << x.gender << ' ' << x.birth << ' ' << x.address << ' ';
			out << x.tax << ' ' << x.date;
			return out;
		}
};

int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}
