#include <bits/stdc++.h>

using namespace std;
#define ll long long

int cnt = 0;

class NhanVien
{
	private:
		string code, name, gender, birth, address, tax, date, d, m, y;
	public:
		string getD() { return d; }
		string getM() { return m; }
		string getY() { return y; }
		friend istream &operator >> (istream &in, NhanVien &x){
			++cnt;
			in.ignore();
			getline(in, x.name);
			in >> x.gender >> x.birth;
			in.ignore();
			getline(in, x.address);
			in >> x.tax >> x.date;
			//tach ngay thang nam
			stringstream ss(x.birth); 
	        getline(ss, x.m, '/');
	        getline(ss, x.d, '/');
	        getline(ss, x.y, '/');
	        //tao ma nv
			if (cnt < 10)
				x.code = "0000" + to_string(cnt);
			else if (cnt < 100)
				x.code = "000" + to_string(cnt);
			else if (cnt < 1000)
				x.code = "00" + to_string(cnt);
			else if (cnt < 10000)
				x.code = "0" + to_string(cnt);
			return in;
		}
		friend ostream &operator << (ostream &out, NhanVien x){
			out << x.code << ' ' << x.name << ' ' << x.gender << ' ' << x.birth << ' ' << x.address << ' ';
			out << x.tax << ' ' << x.date;
			cout << endl;
			return out;
		}
};

bool cmp(NhanVien x, NhanVien y){
	if(x.getY() < y.getY()) return 1;
    if(x.getY() > y.getY()) return 0;
    if(x.getM() < y.getM()) return 1;
    if(x.getM() > y.getM()) return 0;
    if(x.getD() < y.getD()) return 1;
    return 0;
}

void sapxep(NhanVien ds[], int n){
	sort(ds, ds+n, cmp);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
