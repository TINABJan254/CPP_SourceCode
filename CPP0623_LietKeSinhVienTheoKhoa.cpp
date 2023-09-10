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
		cout << "DANH SACH SINH VIEN KHOA " << s << ":\n";
		for (int i = 0; i < n; i++)
			if (List[i].getLop()[1] == s[s.size()-2] && List[i].getLop()[2] == s[s.size()-1])
				cout << List[i];
	}
}
