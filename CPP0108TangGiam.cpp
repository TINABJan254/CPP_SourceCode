#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool prime(long long n){
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return n > 1;
}

bool de(long long n){
	string s = to_string(n);
	if (s.size() == 1)
		return false;
	for (int i = 1; i < s.size(); i++)
		if (s[i] >= s[i-1])
			return false;
	return true;
}

bool in(long long n){
	string s = to_string(n);
	if (s.size() == 1)
		return false;
	for (int i = 1; i < s.size(); i++)
		if (s[i] <= s[i-1])
			return false;
	return true;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		ll cnt = 0;
		int num;
		cin >> num;
		for (ll i = pow(10, num-1); i < pow(10, num); i++)
			if (prime(i) && (de(i) || in(i)))
				++cnt;
		cout << cnt << endl;
	}
}
