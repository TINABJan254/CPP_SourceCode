//su dung lowerbound, thay vi tim vi tri cuoi cung cua phan tu <= x, ta tim phan tu dau tien > x
#include <bits/stdc++.h>

using namespace std;
#define ll long long

bool cmp(int x, int y){
	string xy = to_string(x) + to_string(y);
	string yx = to_string(y) + to_string(x);
	return xy > yx;
}


int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n+5];
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n, cmp);
		for (int i = 0; i < n; i++)
			cout << a[i];
		cout << endl;
	}
}
