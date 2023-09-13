#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
	int stt;
	string mSV, name, Lop, email, DN;
	friend ostream &operator << (ostream &out, SinhVien x){
		out << x.stt << ' ' << x.mSV << ' ' << x.name << ' ' << x.Lop << ' ' << x.email << ' ' << x.DN;
		return out;
	}
};

bool cmp(SinhVien a, SinhVien b){
	return a.name < b.name;
}

int main(){
	int n;
	cin >> n;
	cin.ignore();
	SinhVien ds[n];
	for (int i = 0; i < n; i++){
		ds[i].stt = i+1;
		getline(cin, ds[i].mSV);
		getline(cin, ds[i].name);
		getline(cin, ds[i].Lop);
		getline(cin, ds[i].email);
		getline(cin, ds[i].DN);
	}
	stable_sort(ds, ds+n, cmp);
	int Q;
	cin >> Q;
	while (Q--){
		string s;
		cin >> s;
		for (int i = 0; i < n; i++)
			if (ds[i].DN == s)
				cout << ds[i] << endl;
	}
}
