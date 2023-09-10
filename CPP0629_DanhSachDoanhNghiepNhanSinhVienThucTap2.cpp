#include <bits/stdc++.h>

using namespace std;

class company
{
	private:
		string code, name;
		int numStudent;
	public:
		int getNumStudent(){
			return numStudent;
		}
		string getCode(){
			return code;
		}
		friend istream &operator >> (istream &in, company &x){
			in >> x.code;
			in.ignore();
			getline(in, x.name);
			in >> x.numStudent;
			return in;
		}
		friend ostream &operator << (ostream &out, company x){
			out << x.code << ' ' << x.name << ' ' << x.numStudent;
			out << endl;
			return out;
		}
};

bool cmp(company x, company y){
	if (x.getNumStudent() != y.getNumStudent())
		return x.getNumStudent() > y.getNumStudent();
	return x.getCode() < y.getCode();
}

int main(){
	int n;
	cin >> n;
	company List[n];
	for (int i = 0; i < n; i++)
		cin >> List[i];
	sort(List, List + n, cmp);
	int Q;
	cin >> Q;
	while (Q--){
		int a, b;
		cin >> a >> b;
		cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:\n";
		for (int i = 0; i < n; i++)	
			if (List[i].getNumStudent() >= a && List[i].getNumStudent() <= b)
				cout << List[i];
	}
}
