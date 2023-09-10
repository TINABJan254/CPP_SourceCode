#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool prime[1000000];

void sieve(){
	for (int i = 0; i <= 1000000; i++)
		prime[i] = true;
	prime[0] = prime[1] = false;
	for (int i = 2; i <= sqrt(1000000); i++){
		if (prime[i]) {
			for (int j = i*i; j <= 1000000; j += i)
				prime[j] = false;
		}
	}
}

int main(){
	sieve();
	int t;
	cin >> t;
	while (t--){
		ll L, R, cnt = 0;
		cin >> L >> R;
		ll begin = (ll)sqrt(L);
		ll end = (ll)sqrt(R);
		if (begin*begin < L)
			begin++;
		for (int i = begin; i <= end; i++)
			if (prime[i])
				++cnt;
		cout << cnt << endl;
	}
}
