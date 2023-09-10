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
		float getGPA(){
			return GPA;
		}
		friend istream &operator >> (istream &in, SinhVien &x){
			++cnt;
			in.ignore();
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
			//adjustNameFormat
			for (int i = 1; i < x.name.size(); i++){
				if (x.name[i-1] == ' ')
					x.name[i] = toupper(x.name[i]);
				else
					x.name[i] = tolower(x.name[i]);
			}
			x.name[0] = toupper(x.name[0]);
			return in;
		}
		friend ostream &operator << (ostream &out, const SinhVien x){
			out << x.code << " " << x.name << " " << x.Class << " " << x.birth << " ";
			out << fixed << setprecision(2) << x.GPA;
			out << endl;
			return out;
		}
};

bool cmp(SinhVien x, SinhVien y){
	return x.getGPA() > y.getGPA();
}

void sapxep(SinhVien a[], int n){
	sort(a, a+n, cmp);
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
