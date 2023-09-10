#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
//	ios_base::sync_with_stdio(0); 
//	cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while (t--){
		int n, k;
		cin >> k >> n;
		int a[n*k];
		for (int i = 0; i < n*k; i++){
			cin >> a[i];
		}
		sort(a, a+n*k);
		for (int i = 0; i < n*k; i++)
			cout << a[i] << " ";
		cout << endl;
	}
}
