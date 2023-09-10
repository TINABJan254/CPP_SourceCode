#include <bits/stdc++.h>

using namespace std;

class GiangVien
{
	private:
		string hoTen, ten, maGV, BoMon, mBM;
	public:
		GiangVien(){
			ten = "";
			mBM = "";
			maGV = "";
		}
		string getTen(){
			return ten;
		}
		string getMaGV(){
			return maGV;
		}
		friend istream &operator >> (istream &in, GiangVien &x){
			getline(in, x.hoTen);
			getline(in, x.BoMon);
			//tach ten
			int pos = x.hoTen.size()-1;
			while (x.hoTen[pos] != ' ')	
				--pos;
			for (int i = pos+1; i < x.hoTen.size(); i++)
				x.ten += x.hoTen[i];
			//tao ma BO MON
			for (int i = 0; i < x.BoMon.size(); i++)
				x.BoMon[i] = toupper(x.BoMon[i]);
			x.mBM += x.BoMon[0];
			for (int i = 1; i < x.BoMon.size(); i++)
				if (x.BoMon[i-1] == ' ')
					x.mBM += x.BoMon[i];
			return in;
		}
		void taoMaGV(int order);
		friend ostream &operator << (ostream &out, GiangVien x){
			out << x.maGV << ' ' << x.hoTen << ' ' << x.mBM;
			out << endl;
			return out;
		}
};

void GiangVien::taoMaGV(int order){
	if (order < 10)
		maGV += "GV0" + to_string(order);
	else
		maGV += "GV" + to_string(order);
}

bool cmp(GiangVien x, GiangVien y){
	if (x.getTen() != y.getTen())
		return x.getTen() < y.getTen();
	else
		return x.getMaGV() < y.getMaGV();
}

int main(){
	int n;
	cin >> n;
	cin.ignore();
	GiangVien List[n];
	for (int i = 0; i < n; i++){
		cin >> List[i];
		List[i].taoMaGV(i+1);
	}
	sort(List, List + n, cmp);
	for (int i = 0; i < n; i++)	
		cout << List[i];
}
