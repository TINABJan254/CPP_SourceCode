#include <bits/stdc++.h>

using namespace std;

class SinhVien
{
	private:
		string name, code, birth, Class;
		float GPA;
	public:
		SinhVien(){
			code = "B20DCCN001";
		}
		friend istream& operator >> (istream &in, SinhVien &st){
			getline(in, st.name);
			in >> st.Class >> st.birth >> st.GPA;
			return in;
		}
		friend ostream& operator << (ostream &out, SinhVien st){
			if (st.birth[2] != '/')
				st.birth.insert(0, "0");
			if (st.birth[5] != '/')
				st.birth.insert(3, "0");
			out << st.code << " " << st.name << " " << st.Class << " " << st.birth << " ";
			out << fixed << setprecision(2) << st.GPA;
			return out;
		}
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
