#include <bits/stdc++.h>

using namespace std;


int main() {
    int T;
    cin >> T;

    while (T--) {
        int a, b, m, n;
        cin >> m >> n >> a >> b;
        int res = 0;
        for (int i = m; i <= n; i++){
        	if (i % a == 0 || i % b == 0)
        		++res;
		}
		cout << res << endl;
    }
}
