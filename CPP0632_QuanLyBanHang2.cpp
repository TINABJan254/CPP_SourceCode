#include <bits/stdc++.h>

using namespace std;

class KhachHang;
class MatHang;

map<string, KhachHang> KH;
map<string, MatHang> MH;

int nKhach = 0, nHang = 0, nHoaDon = 0;

class KhachHang
{
	private:
		string maKH, tenKH, sex, nsinh, dchi;
	public:
		friend class HoaDon;
		string getTenKH(){
			return tenKH;
		}
		string getDchi(){
			return dchi;
		}
		friend istream &operator >> (istream &in, KhachHang &x){
			++nKhach;
			scanf("\n");
			getline(in, x.tenKH);
			in >> x.sex >> x.nsinh;
			in.ignore();
			getline(in, x.dchi);
			if (nKhach < 10)
				x.maKH += ("KH00" + to_string(nKhach));
			else if (nKhach < 100)
				x.maKH += ("KH0" + to_string(nKhach));
			else
				x.maKH += ("KH" + to_string(nKhach));
			KH[x.maKH] = x;
			return in;
		}
};

class MatHang
{
	private:
		string maMH, tenMH, dvi;
		int mua, ban;
	public:
		friend class HoaDon;
		string getTenMH(){
			return tenMH;
		}
		string getDvi(){
			return dvi;
		}
		int getMua(){
			return mua;
		}
		int getBan(){
			return ban;
		}
		friend istream &operator >> (istream &in, MatHang &x){
			++nHang;
			scanf("\n");
			getline(in, x.tenMH);
			getline(in, x.dvi);
			in >> x.mua >> x.ban;
				if (nHang < 10)
				x.maMH += ("MH00" + to_string(nHang));
			else if (nHang < 100)
				x.maMH += ("MH0" + to_string(nHang));
			else
				x.maMH += ("MH" + to_string(nHang));
			MH[x.maMH] = x;
			return in;
		}
};

class HoaDon
{
	private:
		string maHD, khach, hang;
		int SL, LoiNhuan;
	public:
		int getLoiNhuan(){
			return LoiNhuan;
		}
		friend istream &operator >> (istream &in, HoaDon &x){
			++nHoaDon;
			in >> x.khach >> x.hang >> x.SL;
			if (nHoaDon < 10)
				x.maHD += ("HD00" + to_string(nHoaDon));
			else if (nHoaDon < 100)
				x.maHD += ("HD0" + to_string(nHoaDon));
			else
				x.maHD += ("HD" + to_string(nHoaDon));
			x.LoiNhuan = MH[x.hang].getBan()*x.SL - MH[x.hang].getMua()*x.SL;
			return in;
		}
		friend ostream &operator << (ostream &out, HoaDon x){
			out << x.maHD << ' ';
			out << KH[x.khach].getTenKH() << ' ' << KH[x.khach].getDchi() << ' ';
			out << MH[x.hang].getTenMH() << ' ';
			out << x.SL << ' ' << MH[x.hang].getBan()*x.SL << ' ';
			out << x.LoiNhuan << endl;
			return out;
		}
};

bool cmp(HoaDon x, HoaDon y){
	return x.getLoiNhuan() > y.getLoiNhuan();
}

void sapxep(HoaDon dshd[], int k){
	stable_sort(dshd, dshd + k, cmp);
}

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
