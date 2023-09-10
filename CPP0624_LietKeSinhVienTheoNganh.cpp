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

void str_upr(string &s){
	for (int i = 0; i < s.size(); i++)
		s[i] = toupper(s[i]);
}

int main(){
	SinhVien List[1000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> List[i];
	int Q;
	cin >> Q;
	cin.ignore();
	string s;
	for (int i = 0; i < Q; i++){
		getline(cin, s);
		str_upr(s);
		cout << "DANH SACH SINH VIEN NGANH " << s << ":\n";
		string MaNganh = "";
		s = " " + s;
		for (int i = 1; i < s.size(); i++)
			if (s[i-1] == ' ')
				MaNganh += s[i];
		MaNganh[2] = '\0';
		for (int i = 0; i < n; i++){
			//loai di sinh vien lop E voi nganh CNTT va ATTT
		    if(List[i].getLop()[0] == 'E' && (List[i].getMSV()[5] == 'C' || List[i].getMSV()[5] == 'A')) continue;
		    if (List[i].getMSV()[5] == MaNganh[0] && List[i].getMSV()[6] == MaNganh[1])
				cout << List[i];
		}
			
	}
}
