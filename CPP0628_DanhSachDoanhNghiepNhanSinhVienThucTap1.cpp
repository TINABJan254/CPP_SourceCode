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
	for (int i = 0; i < n; i++)
		cout << List[i];
	return 0;
}
