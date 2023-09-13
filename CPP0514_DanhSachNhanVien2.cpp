#include <bits/stdc++.h>
                          
using namespace std;

void adjust(string &s){
	for (int i = 0; i < s.size(); i++)
		s[i] = tolower(s[i]);
	s[0] = toupper(s[0]);
	for (int i = 1; i < s.size(); i++)
		if (s[i-1] == ' ')
			s[i] = toupper(s[i]);
}

struct SinhVien{
	string code, name, Lop, birth;
	float GPA;
	static int nSinhVien;
	friend istream &operator >> (istream &in, SinhVien &x){
		++nSinhVien;
		in.ignore();
		getline(in, x.name);
		in >> x.Lop >> x.birth >> x.GPA;
		//tao ma sinh vien
		if (nSinhVien < 10)
			x.code = "B20DCCN00" + to_string(nSinhVien);
		else if (nSinhVien < 100)
			x.code = "B20DCCN0" + to_string(nSinhVien);
		else
			x.code = "B20DCCN" + to_string(nSinhVien);
		//chuan hoa ngay sinh
		if (x.birth[2] != '/')
			x.birth.insert(0, "0");
		if (x.birth[5] != '/')
			x.birth.insert(3, "0");
		//chuan hoa ten
		adjust(x.name);
		return in;
	}
	friend ostream &operator << (ostream &out, SinhVien x){
		out << x.code << ' ' << x.name << ' ' << x.Lop << ' ' << x.birth << ' ';
		out << fixed << setprecision(2) << x.GPA;
		out << endl;
		return out;
	}
};

int SinhVien::nSinhVien = 0;

void nhap(SinhVien ds[], int n){
	for (int i = 0; i < n; i++)
		cin >> ds[i];
}

void in(SinhVien ds[], int n){
	for (int i = 0; i < n; i++)
		cout << ds[i];
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
