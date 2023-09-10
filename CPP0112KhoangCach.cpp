#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		pair <double, double> p1, p2;
		cin >> p1.first >> p1.second;
		cin >> p2.first >> p2.second;
		double dis = sqrt((p1.first - p2.first)*(p1.first - p2.first) + (p1.second - p2.second)*(p1.second - p2.second));
		cout << fixed << setprecision(4) << dis << endl;
	}
}
