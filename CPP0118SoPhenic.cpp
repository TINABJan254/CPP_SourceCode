#include <bits/stdc++.h>

using namespace std;

bool check_pt(int n){
	int res = 0;
	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0){
			++res;
			int cnt = 0;
			while (n % i == 0){
				++cnt;
				n /= i;
			}
			if (cnt > 1)
				return false;
		}
	}
	if (n != 1)
		++res;
	return res == 3;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
		if (check_pt(n))
			cout << "1\n";
		else 
			cout << "0\n";
    }
}
