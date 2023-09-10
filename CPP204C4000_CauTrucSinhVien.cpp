#include <bits/stdc++.h>

using namespace std;

#define ll long long

struct SinhVien{
	string name, code, Class, birth;
	float GPA;
	SinhVien(){
		code = "N20DCCN001";
	}
};
typedef SinhVien SV;

void nhapThongTinSV(SV &x){
	getline(cin, x.name);
	cin >> x.Class >> x.birth >> x.GPA;
}

void inThongTinSV(SV x){
	if (x.birth[2] != '/')
		x.birth.insert(0,"0");
	if (x.birth[5] != '/')
		x.birth.insert(3,"0");
	cout << x.code << "\t" << x.name << "\t" << x.Class << "\t" << x.birth << "\t";
	cout << fixed << setprecision(2) << x.GPA;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
