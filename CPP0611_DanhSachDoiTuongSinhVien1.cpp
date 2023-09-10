#include <bits/stdc++.h>

using namespace std;

int cnt = 0;

class SinhVien
{
	private:
		string name, code, birth, Class;
		float GPA;
	public:
		SinhVien(){
			code = "B20DCCN";
		}
		friend istream &operator >> (istream &in, SinhVien &x){
			++cnt;
			cin.ignore();
			getline(in, x.name);
			in >> x.Class >> x.birth >> x.GPA;
			//generateCode
			string tmp = to_string(cnt);
			if (cnt < 10)
				tmp = "00" + tmp;
			else if (cnt < 100)
				tmp = "0" + tmp;
			x.code += tmp;
			//adjustDateFormat
			if (x.birth[2] != '/')
				x.birth.insert(0, "0");
			if (x.birth[5] != '/')
				x.birth.insert(3, "0");
			return in;
		}
		friend ostream &operator << (ostream &out, SinhVien x){
			cout << x.code << " " << x.name << " " << x.Class << " " << x.birth << " ";
			cout << fixed << setprecision(2) << x.GPA;
			cout << endl;
			return out;
		}
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
