#include <bits/stdc++.h>

using namespace std;

void chuanHoaTen(string &s){
	for (int i = 0; i < s.size(); i++)
		s[i] = tolower(s[i]);
	s[0] = toupper(s[0]);
	for (int i = 0; i < s.size(); i++)
		if (s[i-1] == ' ')
			s[i] = toupper(s[i]);
}

class SinhVien
{
	private:
		string code, name, Lop, birth;
		float GPA;
	public:
		SinhVien(){
			code = "B20DCCN001";
			name = "";
			Lop  = "";
			birth = "";
			GPA = 0;
		}
		friend istream &operator >> (istream &in, SinhVien &x){
			getline(in, x.name);
			in >> x.Lop >> x.birth >> x.GPA;
			//chuan hoa nsinh
			if (x.birth[2] != '/')
				x.birth.insert(0, "0");
			if (x.birth[5] != '/')
				x.birth.insert(3, "0");
			//chuan hoa ten
			chuanHoaTen(x.name);
			return in;
		}
		friend ostream &operator << (ostream &out, SinhVien x){
			out << x.code << ' ' << x.name << ' ' << x.Lop << ' ' << x.birth << ' ';
			out << fixed << setprecision(2) << x.GPA;
			return out;
		}
};


int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}

