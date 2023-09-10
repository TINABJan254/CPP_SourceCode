#include <bits/stdc++.h>

using namespace std;

int find(int n, int p) {
    int x = 0;
    while (n >= p) {
        n = n / p;
        x += n;
    }
    return x;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, p;
		cin >> n >> p;
		long long cnt = find(n, p);
		cout << cnt << endl;
	}
}
