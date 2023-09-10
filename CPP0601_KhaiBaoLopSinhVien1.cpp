#include <bits/stdc++.h>

using namespace std;

class SinhVien
{
	private:
		string name, code, birth, Class;
		float GPA;
	public:
		SinhVien(){
			code = "B20DCCN001";
		}
		void nhap();
		void xuat();
};
typedef SinhVien SV;

void SV::nhap(){
	getline(cin, name);
	cin >> Class >> birth >> GPA;
	if (birth[2] != '/')
		birth.insert(0, "0");
	if (birth[5] != '/')
		birth.insert(3, "0");
}

void SV::xuat(){
	cout << code << " " << name << ' ' << Class << ' ' << birth << ' ';
	cout << fixed << setprecision(2) << GPA;
}

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
