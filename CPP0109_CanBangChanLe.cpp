#include <bits/stdc++.h>

using namespace std;

bool check(int n){
	int odd = 0, even = 0;
	while (n != 0){
		int r = n % 10;
		if (r % 2 == 0)
			++odd;
		else
			++even;
		n /= 10;
	}
	return odd == even;
}

int main(){
	int n, line = 0;
	cin >> n;
	for (int i = pow(10, n-1); i < pow(10, n); i++){
		if (check(i)){
			++line;
			if (line != 10)
				cout << i << " ";
			else {
				cout << i << endl;
				line = 0;
			}
		}
	}
}
