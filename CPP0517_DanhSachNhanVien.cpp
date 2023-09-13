#include <bits/stdc++.h>

using namespace std;

struct NhanVien{
	static int nNhanVien;
	string maNV, hoTen, sex, nsinh, dchi, taxCode, signDate;
	friend ostream &operator << (ostream &out, NhanVien x){
		out << x.maNV << ' ' << x.hoTen << ' ' << x.sex << ' ' << x.nsinh << ' ' << x.dchi << ' ' << x.taxCode << ' ' << x.signDate;
		return out;
	}
};

int NhanVien::nNhanVien = 0;

void nhap(NhanVien &x){ 
	x.nNhanVien++;
	if (x.nNhanVien < 10)
		x.maNV = "0000" + to_string(x.nNhanVien);
	else if (x.nNhanVien < 100)
		x.maNV = "000" + to_string(x.nNhanVien);
	else if (x.nNhanVien < 1000)
		x.maNV = "00" + to_string(x.nNhanVien);
	else if (x.nNhanVien < 10000)
		x.maNV = "0" + to_string(x.nNhanVien);
	else
		x.maNV = to_string(x.nNhanVien);
	cin.ignore();
	getline(cin, x.hoTen);
	cin >> x.sex >> x.nsinh;
	cin.ignore();
	getline(cin, x.dchi);
	cin >> x.taxCode >> x.signDate;
}

void inds(NhanVien ds[], int n){
	for (int i = 0; i < n; i++)
		cout << ds[i] << endl;
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
