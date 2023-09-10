#include <bits/stdc++.h>

using namespace std;

#define ll long long

struct NhanVien{
	string name, employeeCode, gender, birth, address, taxCode, signDate;
	NhanVien(){
		employeeCode = "00001";
	}
};
typedef NhanVien NV;

void nhap(NV &x){
	getline(cin, x.name);
	cin >> x.gender >> x.birth;
	cin.ignore();
	getline(cin, x.address);
	cin >> x.taxCode >> x.signDate;
}

void in(NV x){
	cout << x.employeeCode << " " << x.name << " " << x.gender << " " << x.birth << " ";
	cout << x.address << " " << x.taxCode << " " << x.signDate;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
