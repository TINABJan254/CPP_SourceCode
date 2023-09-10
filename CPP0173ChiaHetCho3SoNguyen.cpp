#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b){
	while (b != 0){
		long long r = a % b;
		a = b;
		b = r;
	}
	return a;
}

long long lcm(long long a, long long b){
	return (1ll*a/gcd(a, b))*b;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long x, y, z, n;
        cin >> x >> y >> z >> n;
       	long long begin = lcm(lcm(x,y), z);
       	string s = to_string(begin);
       	if (s.size() != n)
       		begin = pow(10, n-1);
       	bool flag = true;
       	long long step = x*y*z;
       	for (long long i = begin ; i < pow(10, n); i+=step)
       		if (i % x == 0 && i % y == 0 && i % z == 0){
       			cout << i << endl;
       			flag = false;
       			break;
			}
		if (flag)
			cout << "-1\n";
    }
}
