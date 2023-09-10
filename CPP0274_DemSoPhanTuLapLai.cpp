#include <bits/stdc++.h>

using namespace std;
#define ll long long
int mark[1000005];

void init(){
	for (int i = 0; i < 1000005; i++)
		mark[i] = 0;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		init();
		int n;
		cin >> n;
		int a[n+5];
		for (int i = 0; i < n; i++){
			cin >> a[i];
			mark[a[i]]++;
		}
		int ans = 0;
		for (int i = 0; i < n; i++){
			if (mark[a[i]] > 1){
				++ans;	
			}
		}
		cout << ans << endl;
	}
	
}
