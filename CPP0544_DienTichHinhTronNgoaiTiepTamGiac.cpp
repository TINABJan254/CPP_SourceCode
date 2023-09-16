#include <bits/stdc++.h>

using namespace std;
#define PI 3.141592653589793238

struct Point{
	double x, y;
};

double getSide(Point tmp1, Point tmp2) {
    return sqrt((tmp1.x - tmp2.x) * (tmp1.x - tmp2.x) + (tmp1.y - tmp2.y) * (tmp1.y - tmp2.y));
}

int main(){
	int t;
	cin >> t;
	while (t--){
		Point A, B, C;
		cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;
		double AB = getSide(A, B);
		double AC = getSide(A, C);
		double BC = getSide(B, C);
		if(AB + AC > BC && AC + BC > AB && AB + BC > AC) {
            double p = (AB + AC + BC) / 2;
            double s = sqrt(p * (p - AB) * (p - AC) * (p - BC));
            double r = (AB * AC * BC) / (4 * s);
            cout << setprecision(3) << fixed << PI * r * r << endl;
        }
        else cout << "INVALID\n";
	}
}
