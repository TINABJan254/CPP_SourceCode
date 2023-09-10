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
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> List[i];
	int Q;
	cin >> Q;
	string s;
	for (int i = 0; i < Q; i++){
		cin >> s;
		cout << "DANH SACH SINH VIEN LOP " << s << ":\n";
		for (int i = 0; i < n; i++)
			if (List[i].getLop() == s)
				cout << List[i];
	}
}
