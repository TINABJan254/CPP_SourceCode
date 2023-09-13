#include <bits/stdc++.h>

using namespace std;

struct NhanVien{
	string code, name, sex, birth, address, taxCode, signDate, DD, MM, YY;
	static int order;
	friend ostream &operator << (ostream &out, NhanVien x){
		out << x.code << ' ' << x.name << ' ' << x.sex << ' ' << x.birth << ' ' << x.address << ' ' << x.taxCode << ' ' << x.signDate;
		return out;
	}
};

int NhanVien::order = 0;

void nhap(NhanVien &x){
	x.order++;
	cin.ignore();
	getline(cin, x.name);
	cin >> x.sex >> x.birth;
	cin.ignore();
	getline(cin, x.address);
	cin >> x.taxCode >> x.signDate;
	//create EmployeeCode
	if (x.order < 10)
		x.code = "0000" + to_string(x.order);
	else if (x.order < 100)
		x.code = "000" + to_string(x.order);
	else if (x.order < 1000)
		x.code = "00" + to_string(x.order);
	else if (x.order < 10000)
		x.code = "0" + to_string(x.order);
	else 
		x.code = to_string(x.order);
	//get D, M, Y
	x.MM = x.birth.substr(0, 2);
	x.DD = x.birth.substr(3, 2);
	x.YY = x.birth.substr(6, 4);
}

bool cmp(NhanVien x, NhanVien y){
	if (x.YY != y.YY)
		return x.YY < y.YY;
	else if (x.MM != y.MM)
		return x.MM < y.MM;
	else
		return x.DD < y.DD;
}

void sapxep(NhanVien ds[], int n){
	stable_sort(ds, ds+n, cmp);
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
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
