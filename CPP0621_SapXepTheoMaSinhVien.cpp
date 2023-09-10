#include <bits/stdc++.h>

using namespace std;

class SinhVien
{
	private:
		string mSV, hoTen, Lop, email;
	public:
		string getLop(){
			return Lop;
		}
		string getMSV(){
			return mSV;
		}
		friend istream &operator >> (istream &in, SinhVien &x){
			in >> x.mSV;
			in.ignore();
			getline(in, x.hoTen);
			in >> x.Lop >> x.email;
			return in;
		}
		friend ostream &operator << (ostream &out, SinhVien x){
			out << x.mSV << ' ' << x.hoTen << ' ' << x.Lop << ' ' << x.email;
			out << endl;
			return out;
		}
};

bool cmp(SinhVien x, SinhVien y){
	if (x.getMSV() < y.getMSV())
		return 1;
	return 0;
}

int main(){
	SinhVien List[1000];
	SinhVien x;
	int len = 0;
	while (cin >> x){
		List[len++] = x;
	}
	sort(List, List + len, cmp);
	for (int i = 0; i < len; i++)
		cout << List[i];
}
