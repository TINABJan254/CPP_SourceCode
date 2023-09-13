#include <bits/stdc++.h>

using namespace std;

struct MatHang{
	static int order;
	string name, group;
	float GiaMua, GiaBan;
	int code;
	friend istream &operator >> (istream &in, MatHang &x){
		++order;
		in.ignore();
		getline(in, x.name);
		getline (in, x.group);
		in >> x.GiaMua >> x.GiaBan;
		x.code = order;
		return in;
	}
	friend ostream &operator << (ostream &out, MatHang x){
		out << x.code << ' ' << x.name << ' ' << x.group << ' ';
		out << fixed << setprecision(2) << (x.GiaBan - x.GiaMua);
		out << endl;
		return out;
	}
};

int MatHang::order = 0;

bool cmp(MatHang x, MatHang y){
	return (x.GiaBan - x.GiaMua) > (y.GiaBan - y.GiaMua);
}

void sapxep(MatHang List[], int n){
	stable_sort(List, List+n, cmp);
}

void inds(MatHang List[], int n){
	for (int i = 0; i < n; i++)
		cout << List[i];
}

int main(){
	int n;
	cin >> n;
	MatHang List[n+5];
	for (int i = 0; i < n; i++)
		cin >> List[i];
	sapxep(List, n);
	inds(List, n);
}
