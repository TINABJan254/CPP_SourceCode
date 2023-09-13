#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
	string code, name, Class;
	float mark1, mark2, mark3;
	friend ostream &operator << (ostream &out, SinhVien x){
		out << x.code << ' ' << x.name << ' ' << x.Class << ' ';
		out << fixed << setprecision(1) << x.mark1 << ' ';
		out << fixed << setprecision(1) << x.mark2 << ' ';
		out << fixed << setprecision(1) << x.mark3 << ' ';
		return out;
	}
};

void nhap(SinhVien &x){
	cin >> x.code;
	cin.ignore();
	getline(cin, x.name);
	cin >> x.Class >> x.mark1 >> x.mark2 >> x.mark3;
}

bool cmp(SinhVien x, SinhVien y){
	return x.code < y.code;
}

void sap_xep(SinhVien ds[], int n){
	sort(ds, ds+n, cmp);
}

void in_ds(SinhVien ds[], int n){
	for (int i = 0; i < n; i++)
		cout << i+1 << ' ' << ds[i] << endl;
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
